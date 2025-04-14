#include<iostream>
using namespace std;
class Node{
    public:
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
    private:
    Node *head;
    public:
    LinkedList(){
        head = NULL;
    }

    void addNode(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void deleteAtAnyPosition(int data){
        Node *temp = head;
        while(temp->next->data != data){
            temp = temp->next;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;

        delete toDelete;
    }

    void print(){
        Node *temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList list;
    list.addNode(10);
    list.addNode(11);
    list.addNode(12);
    list.addNode(13);
    list.addNode(14);
    cout<<"The LinkedList is"<<endl;
    list.print();
    cout<<"After Delete Node"<<endl;
    list.deleteAtAnyPosition(13);
    list.deleteAtAnyPosition(11);
    list.print();
}