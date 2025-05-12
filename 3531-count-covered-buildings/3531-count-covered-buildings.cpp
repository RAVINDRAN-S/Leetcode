class Solution {
   
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int,set<int>> r; 
        unordered_map<int,set<int>> c;  
        for (const auto& b : buildings) {
            int x = b[0];
            int y = b[1];
            r[x].insert(y);
            c[y].insert(x);
        }
        int co = 0;
        for (const auto& b : buildings) {
            int x = b[0];
            int y = b[1];
            
            bool L= false;
            bool R= false;
            bool A =false;
            bool B=false;
            auto& row = r[x];
            auto it = row.lower_bound(y);
            if (it != row.begin()) {
                L = true;
            }
            it = row.upper_bound(y);
            if (it != row.end()) {
                R=true;
            }
            auto& col = c[y];
            auto colIt = col.lower_bound(x);
            if (colIt != col.begin()) {
                A= true;
            }
            colIt = col.upper_bound(x);
            if (colIt != col.end()) {
                B= true;
            }
            if (L&& R &&A && B) {
                co++;
            }
        }
        
        return co;
    }
};