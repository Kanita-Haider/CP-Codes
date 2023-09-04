#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int val = 0, Node* next = nullptr) : val(val), next(next) {}
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    
    while (current != nullptr) {
        Node* temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    
    return prev;
}

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
    cout<<temp->val<<endl;
    return temp->next;
}


void printLinkedList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
}

int main() {

    Node* head = createLinkedList();
    Node* newHead = reverseList(head);

    printLinkedList(newHead);

    return 0;
}
