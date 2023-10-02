#include<bits/stdc++.h>
using namespace std;

// time complexity O(N) 
// space complexity O(1)


struct TreeNode {
    
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int height(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

       return max(leftHeight, rightHeight) + 1;
    }

    TreeNode* buildTree(vector<int>& arr, int index) {
        if (index >= arr.size() ) {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(arr[index]);
        root->left = buildTree(arr, 2 * index + 1);
        root->right = buildTree(arr, 2 * index + 2);

        return root;
    }
};

int main() {
    Solution solution;

    vector<int> arr = {3,9,20,-1, -1, 15, 7 -1,-1};

    TreeNode* root = solution.buildTree(arr, 0);

    int treeHeight = solution.height(root);

    cout << "Height of the binary tree is: " << treeHeight << endl;

    return 0;
}
