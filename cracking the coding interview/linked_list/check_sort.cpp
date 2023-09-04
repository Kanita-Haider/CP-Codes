#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int val = 0, Node* next = nullptr) : val(val), next(next) {}
};


Node* createLinkedList() {
    int n;
    cin >> n;

    Node* temp = new Node(-1);
    Node* current = temp;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        current->next = new Node(val);
        current = current->next;
    }
    return temp->next;
}




int checkSort(Node* head) {
    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->val > current->next->val) {
            return 0; 
        }
        current = current->next;
    }
    return 1; 
}





int main() {

    Node* head = createLinkedList();

    int ans=checkSort(head);
    if(ans==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
