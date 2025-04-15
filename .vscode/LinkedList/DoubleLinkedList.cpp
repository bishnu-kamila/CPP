#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(){
        data = 0;
        prev = NULL;
        next = NULL;
    }

};

class DoublyLinkedList {
    private:
        Node* head;
    public:
        DoublyLinkedList(){
            head = NULL;
        }

        void insertAtBegining(int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return;
            }
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        

}
int main(){
    
}
