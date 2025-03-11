#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class stack {
private:
    Node* top;

public:
    stack() { 
        top = nullptr;
    }

    ~stack() { 
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed onto stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack." << endl;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    s.display();
    return 0;
}
