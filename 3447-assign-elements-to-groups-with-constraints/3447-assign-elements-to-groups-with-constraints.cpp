class Solution {
public:
    vector<int> assignElements(vector<int>& groups, vector<int>& elements) {
        const int MAXV = 100000;
        const int INF = INT_MAX;
        
        
        vector<int> firstOccurrence(MAXV + 1, INF);
        for (int j = 0; j < (int)elements.size(); j++) {
            int val = elements[j];
            firstOccurrence[val] = min(firstOccurrence[val], j);
        }
        
        int n = groups.size();
        vector<int> assigned(n, -1);
        
       
        for (int i = 0; i < n; i++) {
            int g = groups[i];
            int best = INF;
            int limit = sqrt(g);
            for (int d = 1; d <= limit; d++) {
                if (g % d == 0) {
                    int cand1 = d;
                    int cand2 = g / d;
                    
                   
                    if (cand1 <= MAXV && firstOccurrence[cand1] != INF)
                        best = min(best, firstOccurrence[cand1]);
                    
                   
                    if (cand2 != cand1 && cand2 <= MAXV && firstOccurrence[cand2] != INF)
                        best = min(best, firstOccurrence[cand2]);
                }
            }
            assigned[i] = (best == INF ? -1 : best);
        }
        return assigned;
    }
};