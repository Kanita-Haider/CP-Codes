#include<bits/stdc++.h>
#define   ll        long long
#define   ull       unsigned long long 
#define   mp        make_pair
#define   pb        push_back
#define   ff        first
#define   ss        second
#define   nl         "\n"
#define   pii       pair <int, int>
#define   pll       pair <ll , ll > 
#define   pi        acos(-1.0)
#define mset(a, b) memset(a, b, sizeof(a))
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL)

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }


 Node* insert(Node* root, int data) {
        if(root == NULL){
            return new Node(data);
        }
        
     else{
            Node* cur;
            if(data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else {
                cur = insert(root->right, data);
                root->right = cur;
            }
        return root;
     }
    }

    void inorder(Node* root){
        if(root == NULL)
            return;
        
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

 Node* search(Node* root, int key) {
            if(root == NULL || root->data == key)
                return root;

            // Key is greater than root's data
            if(root->data < key)
                return search(root->right,key);

            // Key is smaller than root's data
            return search(root->left,key);
         }

};
int main()
{
 FAST;
 Node Tree(0);
    Node* root = NULL;
    //Number of nodes to be inserted
    int t;
    cin>>t;
    while(t--){
        int data;
        cin>>data;
        root = Tree.insert(root,data);
    }
   // Tree.levelOrder(root);

     cout << "Enter the data to find:";
    int data;
    cin>>data;
    Node* find_element = Tree.search(root,data);

return 0;
} 

