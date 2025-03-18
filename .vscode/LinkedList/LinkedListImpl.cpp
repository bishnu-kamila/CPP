#include<iostream>
using namespace std;
class Node{
    int data;
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
        head = NULL;
    }
    void insertAtHead(int data){
        Node *newNode = new Node();
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = this->head;
        this->head = newNode;
    }

    void print(){
        
    }
    
}
int main(){
    LinkedList list;

    list.insertAtHead(4);
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtHead(1);

    cout<<"Element of the list are: ";

    list.print();
    cout<<endl;
    return 0;
}