#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};
class LinkedList{
    private:
    Node *head;
    LinkedList(){
        head = NULL;
    }

    void insertAtBegning(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

     void insertAtEnd(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;

     }

     void insertAtPosition(int pos, int data){
        Node *newNode = new Node(data);
        if(pos == 1){
            newNode->next = head;
            if(head != NULL){
                head->prev = newNode;
            }
            head = newNode;
            return;
        }
        Node *temp = head;
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        if(temp->next != NULL){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        newNode->prev = temp;

     }

     void deleteAtBegning(){
         if(head == NULL){
             cout<<"List is empty"<<endl;
             return;
         }
         Node *temp = head;
         head = head->next;
         if(head != NULL){
             head->prev = NULL;
         }
         delete temp;

     }

     void print(){
         Node *temp = head;
         while(temp != NULL){
             cout<<temp->data<<" ";
             temp = temp->next;
         }
         cout<<endl;
    }

}