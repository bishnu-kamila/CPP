#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    int priority;
    Node *next;
    Node(int value, int p){
        data = value;
        priority = p;
        next = NULL;
    }
};

class PriorityQueue{
    private:
    Node *head;
    public:
    PriorityQueue(){
        head = NULL;
    }

    void enqueue(int data, int priority){
        Node *newNode = new Node(data, priority);
        if(head == NULL || priority<head->priority){
            newNode->next = head;
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next != NULL && temp->next->priority <= priority){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void print(){
        if(head == NULL){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->data << "->";
            temp = temp->next;
        }
           
    }


};
int main(){
    PriorityQueue pq;
    pq.enqueue(10, 3);
    pq.enqueue(20, 4);
    pq.enqueue(50, 5);
    pq.enqueue(5, 1);
    pq.enqueue(7, 2);
    pq.print();
}