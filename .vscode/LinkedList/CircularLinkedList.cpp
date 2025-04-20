#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    Node(){
        data = data;
        next = NULL;
    }
    Node(int value){
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList{
    private:
        Node *tail;
    public:
        LinkedList(){
        tail = NULL;
    }
    void insert(int data){
        Node *newNode = new Node(data);
        if(tail==NULL){
            tail = newNode;
            tail->next = tail;
        }else{
            newNode->next = tell->next;
            tail->next = newNode;
            tail=newNode;
        }
    }

    void display(){
        if(tail==NULL){
            cout<<"List is empty"<<endl;
            return;
        }

        Node *temp = tail->next;
        do{
            cout<<temp->data<<"->";
            temp = temp->next;
        }while(temp ! = tail->next);
        cout<<"(Back to start)"<<endl;
    }
};
int main(){
    LinkedList list;
    list.insert(10);
    list.insert(100);
    list.insert(101);
    list.insert(102);
    list.insert(103);
    list.insert(104);

    
    list.display();
    return;
    
}