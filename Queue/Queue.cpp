#include<iostream>
using namesace std;

class Node{
    public:
    int data;
    Node *next;
    NOde(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    private:
    Node *head;
    public:
    Queue(){
        head = NULL;
    }

    void enqueue(int value){
        Node *newNode = new Node(value);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void dequeue(){
        
    }
}


int main(){

}