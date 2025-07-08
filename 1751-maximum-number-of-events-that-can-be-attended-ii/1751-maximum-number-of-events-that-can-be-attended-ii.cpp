class Solution {
    vector<vector<int>> mem;
    vector<int> next_event;
    int n;

    int attendEvent(vector<vector<int>>& events,int pos,int k){
        if(k==0 or pos>=n)
            return 0;
        if(mem[pos][k]!=-1)
            return mem[pos][k];
        
        int skip_event = attendEvent(events,pos+1,k);

        int next = next_event[pos];
        int attend_event = attendEvent(events,next,k-1) + events[pos][2];
        return mem[pos][k] = max(skip_event,attend_event);
    }
public:
    int maxValue(vector<vector<int>>& events, int k) {
        n = events.size();
        sort(events.begin(),events.end());
        mem.assign(n,vector<int>(k+1,-1));

        next_event = vector<int>(n);
        for(int i=0;i<n;++i)
            next_event[i] = upper_bound(events.begin()+i,events.end(),vector<int>{events[i][1]+1,0,0})-events.begin();
        
        return attendEvent(events,0,k);
    }
};