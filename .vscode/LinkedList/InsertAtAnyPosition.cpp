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
class LinkedList{
    private:
    Node *head;
    public:
    LinkedList(){
        head = NULL;
    }

    void insertAtAnyPosition(int data, int position, Node *head){
        Node *newNode = new Node(data);
        if(position == 1){
            newNode->next = head;
            head = newNode;
            return;
        }

    }
};
int main(){

}