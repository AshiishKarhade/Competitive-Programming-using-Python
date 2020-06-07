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

int counter(node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + counter(root->left) + counter(root->right);
}

int main(){

    node* root = build_tree();
    cout << counter(root) << endl;
    
    return 0;
}
