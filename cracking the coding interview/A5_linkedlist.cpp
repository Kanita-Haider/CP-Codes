#include<bits/stdc++.h>
using namespace std;


struct List {
    int val;
    List* next;
    List(int val = 0, List* next = nullptr) : val(val), next(next) {}
};


List* reverseBetween(List* head, int left, int right) {
    if (!head || left == right) {
        return head;
    }

    List* temp = new List(-1);
    temp->next = head;
    List* prev = temp;

    for (int i = 1; i < left; ++i) {
        prev = prev->next;
    }

    List* current = prev->next;
    for (int i = 0; i < right - left; ++i) {
        List* next_node = current->next;
        current->next = next_node->next;
        next_node->next = prev->next;
        prev->next = next_node;
    }

    return temp->next;
}


List* createLinkedList() {
    int n;
    cin >> n;

    List* temp = new List(-1);
    List* current = temp;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        current->next = new List(val);
        current = current->next;
    }
    return temp->next;
}


void printLinkedList(List* head) {
    List* current = head;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
}


int main() {
    List* head = createLinkedList();

    int left, right;
    cin >> left >> right;

    List* newHead = reverseBetween(head, left, right);

    printLinkedList(newHead);

    return 0;
}
