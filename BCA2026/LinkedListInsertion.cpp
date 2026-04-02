#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
class LinkedList{
    private:
    Node *head;
    public:
    LinkedList(){
        head = NULL;
    }
    void insertAtBegning(int value){
        Node *newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next= head;
        head = newNode;
    }
     void insertAtEnd(int value){
        Node *newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;

     }
     void insertAtPosition(int pos, int value){
        Node *newNode = new Node(value);
        if(pos == 1){
            newNode->next = head;
            head = newNode;
            return;
        }
        Node *temp = head;
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
     }

     void deleteAtBegning(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
     }
     void deleteAtEnd(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
     }
     deleteAtPosition(int pos){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(pos == 1){
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *temp = head;
        for(int i=1;i<pos-1;i++){
            temp = temp->next;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
     }

     void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
     }
};
int main(){
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    
    list.print();
    cout<<endl;

    list.insertAtPosition(3,25);
    list.print();
}
