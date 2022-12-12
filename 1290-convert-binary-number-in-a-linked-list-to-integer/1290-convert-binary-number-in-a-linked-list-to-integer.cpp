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
        vector<int> v;
        
        ListNode *temp=head;
        
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int sm=0,k=1;
        for(int i=v.size()-1; i>=0; i--)
        {
            sm += v[i]*k;
            k=k*2;
        }
        return sm;
        
    }
};