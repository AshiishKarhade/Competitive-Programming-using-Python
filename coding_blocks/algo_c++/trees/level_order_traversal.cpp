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

void level_traversal(node* root){
    
}



int main(){
    
    node* root = build_tree();
    
    //Level Order
    level_traversal(root);

    return 0;
}
