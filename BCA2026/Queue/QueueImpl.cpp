#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class Queue{
    public:
    Node *head;
    Node *tail;
    Queue(){
        head = NULL;
        tail = NULL;
    }

    void enqueue(int data){
        Node *newNode = new Node(data);
        if(head ==NULL){
            head=tail=newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void dequeue(){
        if(head == NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    // q.dequeue();

    while(q.head != NULL){
        cout<<q.head->data<<" ";
        q.dequeue();
    }
    return 0;
}