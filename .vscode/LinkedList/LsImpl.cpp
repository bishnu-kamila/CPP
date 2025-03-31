#include<iostream>
using namespace std;
class Node{
    public:
    int data
    Node *next;

    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList{
    Node *head;
    public:
    LinkedList(){
        head= NULL;
    }
    void insertAtBegin(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = this->head;
        this->head = newNode;
    }
    void print(){
        Node *temp = head;
        if(head == NULL){
            cout<<"List empty"<<" ";
            temp = temp->next;
        }
    }
};
