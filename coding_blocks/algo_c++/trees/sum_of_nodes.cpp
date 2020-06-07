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

int sum(node* root){
    if(root==NULL){
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}

int main(){

    node* root = build_tree();
    cout << sum(root) << endl;
    
    return 0;
}
