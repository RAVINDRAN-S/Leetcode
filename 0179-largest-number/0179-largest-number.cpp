class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans="";
        vector<string>st;
        for (int i :nums){
            st.push_back(to_string(i));
        }
        sort(st.begin(),st.end(), [](const string& x,const string& y){
            return (y+x)<(x+y);
        });
        if (st[0]=="0"){
            return "0";
        }
        for (string s:st){
            ans+=s;
        }
        return ans;
    }
};