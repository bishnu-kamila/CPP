#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    int size;
    cout<<"Enter how much element you want to push : "<<endl;
    cin>>size;
   cout<<"Enter element to push: "<<endl;
    for(int i=0;i<size;i++){
        st.push(i);
    }
    
    while (!st.empty())
    {
        cout<<' '<<st.top();
        st.pop();
    }
    return 0;
}