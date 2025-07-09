class Solution {
public:
    int maxFreeTime(int evet, int k, vector<int>& st, vector<int>& e) {
        if (evet>e.back()){
            st.push_back(evet);
            e.push_back(evet);
        }
        int n=st.size();
        int maxm=0;
        int w=0;
        deque<int>dq;
        int i=0;
        int l=0;
        while(i<n){
            w+=st[i]-l;
            maxm=max(maxm,w);
            if (dq.size()>k){
                w-=dq.front();
                dq.pop_front();
            }
            l=e[i];
            i++;
        }
        return maxm;
    }
};