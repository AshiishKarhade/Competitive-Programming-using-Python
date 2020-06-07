#include <iostream>
using namespace std;

// BUILDING TREE USING RECURSION
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* build_tree(){
    int d;
    cin >> d;
    if(d==-1){
        return NULL;
    }
    
    node* root = new node(d);
    root->left = build_tree();
    root->right = build_tree();
    return root;
}

void print(node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}

int main(){

    node* root = build_tree();
    print(root);
    
    return 0;
}
