#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value){
        if(top==size-1){
            cout<<"Stack is overflowed"<<endl;
        }else{
            top++;
            arr[top]= value;
        }
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

};
int main(){
    Stack S(5);
    S.push(10);
    S.push(50);
    S.push(30);
    S.push(40);
    S.display();

}