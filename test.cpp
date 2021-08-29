class Solution {
public:
    ListNode* add(int data){
        ListNode* newnode=new ListNode;
        newnode->val=data;
        newnode->next=NULL;
        return newnode;
    }
    ListNode* vector_to_ll(vector<int> list,ListNode* head)
    {
        head=add(list[0]);
        ListNode* curr=head;
        for(int i=1;i<list.size();i++){
            curr->next=add(list[i]);
            curr=curr->next;
        }
        return head;
    }
    
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        vector<int> marge;
        while(l1){
            marge.push_back(l1->val);
            l1=l1->next;
        }
        while(l2){
            marge.push_back(l2->val);
            l2=l2->next;
        }
        sort(marge.begin(),marge.end());
        ListNode* head=NULL;
        return vector_to_ll(marge,head);
    }
};