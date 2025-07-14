/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s;
        ListNode* r=head;
        while(r){
            s+=to_string(r->val);
            r=r->next;
        }
        int res=0;
        int n=s.size();
        for (int i=0;i<n;i++){
            if (s[i]=='1'){
                res+=pow(2,n-i-1);

            }
        }
        return res;
    }
};