#include <bits/stdc++.h>


struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

bool isBSTUtil(Node* node, int min, int max) {
    if (node == nullptr) {
        return true;
    }

    if (node->data < min || node->data > max) {
        return false;
    }

    return isBSTUtil(node->left, min, node->data - 1) && isBSTUtil(node->right, node->data + 1, max);
}

bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}



int main() {
    Node* root = nullptr;
    int numNodes;

   // std::cout << "Enter the number of nodes: ";
    std::cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        int value;
       // std::cout << "Enter node value: ";
        std::cin >> value;

        root = insertNode(root, value);
    }

    if (isBST(root)) {
        std::cout << "The tree is a BST" << std::endl;
    } else {
        std::cout << "The tree is not a BST" << std::endl;
    }

    return 0;
}
