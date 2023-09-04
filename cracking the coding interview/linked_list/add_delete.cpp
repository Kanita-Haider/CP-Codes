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

using namespace std;

struct node{
    int roll;
    node *next;
};

node* root= NULL;

void append(int roll){
    if(root==NULL){
        root= new node();
        root->roll=roll;
        root->next= NULL;
    }

    else{
        node *current_node=root;
        while(current_node->next!=NULL){
            current_node= current_node->next;
        }
        node* newnode = new node();
        newnode->roll=roll;
        newnode->next=NULL;
        current_node->next=newnode;
    }
}

void delete_node(int roll){
    node* current_node=root;
    node* prev_node=NULL;
    while(current_node->roll!=roll){
        prev_node= current_node;
        current_node= current_node->next;
    }
    if(current_node==root){
        node* temp=root;
        root=root->next;
        delete(temp);
    }
    else{
        prev_node->next= current_node->next;
        delete(current_node);
    }

}
//adding a new node after Roll;
void add_node_middle(int roll1, int roll2){

    node* current_node=root;
   // node* prev_node= NULL;
    while(current_node->roll!=roll){
      //  prev_node= current_node;
        current_node= current_node->next;
    }
    if(current_node->next==NULL){
        
    }
    node* newnode = new node();
    newnode->roll=roll2;
    newnode->next=current_node;
    current_node->next = newnode;

}


void print(){
    node* current_node = root;
    while (current_node!=NULL){
        cout<<current_node->roll<<nl;;
        current_node=current_node->next;
    }

}

int main()
{
FAST;
append(5);
append(6);
append(7);
delete_node(6);
print();
return 0;
} 

