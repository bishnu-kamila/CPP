#include<iostream>
using namespace std;
class Node {
    public:
        int data;
        Node *next;
    
        Node() {
            data = 0;
            next = NULL;
        }
    
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head = NULL; 
    }

    void insertAtEnd(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        if(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void print(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->data<< " ";
            temp = temp->next;
        }
    }
};
int main(){

    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(101);
    list.insertAtEnd(102);
    list.insertAtEnd(103);
    list.insertAtEnd(104);

    list.print();
}