#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Queue{
    private:
    Node* front;
    Node* rear;
public:
    Queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int ele){
        Node* newNode = new Node();
        newNode->data = ele;
        newNode->next = NULL;

        if(rear == NULL){
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;

    }
    void dequeue(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            rear = NULL;
        }

        Node* temp = front;
        front = front->next;

        // if(front == NULL){
        //     rear = NULL;
        // }

        delete temp;

    }

    void display(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
        }
        Node* temp = front;
        while(temp!=NULL){
            cout<<temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue qqq;
    qqq.enqueue(10); // front
    qqq.enqueue(100);
    qqq.enqueue(101);
    qqq.enqueue(102);
    qqq.enqueue(103);
    qqq.enqueue(104); // rear
    
    cout<<"Queue elements are"<<endl;
    qqq.display();
    qqq.dequeue();
    cout<<"After dequeue the Queue elements are"<<endl;
    qqq.display();


}