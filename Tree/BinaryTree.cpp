#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int *left;
    int *right;
    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }  
};
class BinaryTree{
    public:
    Node *root;
    BinaryTree(){
        root = nullptr;
    }
    void insert(int value){
        if(root == nullptr){
            root = new Node(value);
            return;
        }
        insertHelper(root, value);
    }
    void insertHelper(Node *node, int value){
        if(value < node->data){
            if(node->left == nullptr){
                node->left = new Node(value);
            }else{
                insertHelper(node->left, value);
            }
        }else{
            if(node->right == nullptr){
                node->right = new Node(value);
            }else{
                insertHelper(node->right, value);
            }
        }
    }
};
int main(){

}