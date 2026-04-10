#include<iostream>
using namespace std;
class Stack{
    int arr[5];
    int top;
    public:
    Stack(){
        top = -1;
    }

    void push(int data){
        if(top == 4){
            cout<<"Stack is Full"<<endl;
            return;
        }
        arr[++top] = data;

    }

    void pop(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<"Popped element is: "<<arr[top--]<<endl;
    }

    void display(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        for(int i=top; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}