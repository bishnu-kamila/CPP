#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int size;
    int value;
    cout<<"Enter how much element you want to push : "<<endl;
    cin>>size;
   cout<<"Enter element to push into the stack : "<<endl;
    for(int i=0;i<size;i++){
        cin>>value;
        st.push(value);
    }
    while (!st.empty())
    {
        cout<<' '<<st.top();
        st.pop();
    }
    return 0;
}