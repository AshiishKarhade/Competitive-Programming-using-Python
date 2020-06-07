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
    int data;
    cin >> data;

    if(data==-1){
        return NULL;
    }
    node* root = new node(data);
    root->left = build_tree();
    root->right = build_tree();

    return root;
}

void inorder_traversal(node* root){
    if(root == NULL){
        return;
    }
    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}

void preOrder_traversal(node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preOrder_traversal(root->left);
    preOrder_traversal(root->right);
}

void postOrder_traversal(node* root){
    if(root==NULL){
        return;
    }
    postOrder_traversal(root->left);
    postOrder_traversal(root->right);
    cout << root->data << " ";
}

int main(){
    
    node* root = build_tree();
    
    //INORDER
    cout << "INORDER: ";
    inorder_traversal(root);
    cout << "\n";

    //PREORDER
    cout << "PREORDER: ";
    preOrder_traversal(root);
    cout << "\n";

    //POSTORDER
    cout << "POSTORDER: ";
    postOrder_traversal(root);
    
    return 0;
}
