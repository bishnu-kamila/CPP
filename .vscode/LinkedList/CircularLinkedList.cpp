#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    Node *prev;
    Node(){
        data = data;
        prev = NULL;
        next = NULL;
    }
    Node(int value){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
class LinkedList{
    private:
    Node *tail;
    public:
    LinkedList(){
        tail = NULL;
    }
    void insert(int data){
        Node *newNode = new Node(data);
        if(tail==NULL){
            tail = newNode;
            tail->next = tail;
        }else{
            newNode->next = tell->next;
            tail->next = newNode;
            tail=newNode;
        }
    }

    void display(){
        if(tail==NULL){
            cout<<"List is empty"<<endl;
            return;
        }

        Node *temp = tail->next;
    }
    

}
int main(){
    
}