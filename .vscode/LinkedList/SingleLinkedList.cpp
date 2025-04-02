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

class LinkedList {
    Node *head;
public:
    LinkedList() {
        head = NULL;
    }

    ~LinkedList() {  // Destructor to free allocated memory
        Node *temp;
        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insertAtHead(int data) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void print() {
        Node *temp = head;
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }
        while (temp != NULL) {  // Traverse and print list
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList list;

    list.insertAtHead(4);
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtHead(1);

    cout << "Elements of the list are: ";
    list.print();
    cout << endl;

    return 0;
}
