#include<bits/stdc++.h>
  using namespace std;

  //Huffman tree node
  struct MinHeapNode{
      char data;
      int freq;

      MinHeapNode *left,*right;

      MinHeapNode(char data,int freq){
          left=right=NULL;
          this->data=data;
          this->freq=freq;
     }
};

struct compare{

    bool operator()(MinHeapNode *l,MinHeapNode *r)
    {
        return (l->freq>r->freq);
    }
};


void printCodes(struct MinHeapNode* root,string str){
 
   if(!root){
       return;
   }
  
   if(root->data!='$'){
       cout<<root->data<<": "<<str<<endl;
   }

   printCodes(root->left,str+"0");
   printCodes(root->right,str+"1");
}


void HuffmanCodes(char data[],int freq[],int size){

struct MinHeapNode *left,*right,*top;


priority_queue<MinHeapNode*,vector<MinHeapNode*>,compare> minheap;


for(int i=0;i<size;i++){
    minheap.push(new MinHeapNode(data[i],freq[i]));
 }


 while(minheap.size()!=1){
     
     left = minheap.top();
     minheap.pop();

     right = minheap.top();
     minheap.pop();

     //Create a new internal node having frequency equal to the sum of 
    // two extracted nodes.Assign '$' to this node and make the two extracted 
    // node as left and right children of this new node.Add this node to the 
    // heap.

     top = new MinHeapNode('$',left->freq+right->freq);
     top->left = left;
     top->right = right;

     minheap.push(top);
 }
 
 printCodes(minheap.top()," ");
}

int main(){

  char arr[] = {'a','b','c','d','e'};
  int freq[] = {10,5,2,14,15};

  int size=5;
  HuffmanCodes(arr,freq,size);

return 0;
}
