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
    void deleteAtBegning(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    
}