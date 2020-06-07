#include <iostream>
using namespace std;

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

}

void inorder_traversal(node* root){

}

void preOrder_traversal(node* root){

}

void postOrder_traversal(node* root){

}

int main(){
    
    node* root = build_tree();
    
    //INORDER
    inorder_traversal(root);
    cout << "\n";

    //PREORDER
    preOrder_traversal(root);
    cout << "\n";
    
    //POSTORDER
    postOrder_traversal(root);
    
    return 0;
}
