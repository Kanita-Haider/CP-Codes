#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next = nullptr;
    ListNode (): val(0), next(nullptr){}
    ListNode (int x): val(x), next(nullptr){}
    ListNode (int x, ListNode* next): val(x), next(next){}
};

ListNode* createLinkedList(){
    int n; 
    cin>>n;
    ListNode* temp = new ListNode();
    ListNode* curr = temp;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        curr->next= new ListNode(val);
        curr=curr->next;
    }
    return temp->next;
}

ListNode* reverseBetween(ListNode* head, int left,int right){

ListNode* prev=head;
ListNode* temp = head;

for(int i=1;i<left;i++) prev=prev->next;

cout<<prev->val<<endl;
ListNode* curr=prev->next;
//cout<<curr->val<<endl;
for(int i=1;i<=right-left;i++) {
    ListNode* curr_next= curr->next;
    curr->next;
  

}
    

}

printList(ListNode* head){

    ListNode* curr = head;
    while(curr){
        cout<<curr->val<<" ";
        curr=curr->next;
    }
}

int main(){

ListNode* head = createLinkedList();
reverseBetween(head ,2,4);
printList(head);

}