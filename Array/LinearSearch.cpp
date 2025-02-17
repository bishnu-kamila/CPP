#include<iostream>
using namespace std;
int main(){
    int size;
    int searchEle;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element which you want to search: "<<endl;
    cin>>searchEle;
    for(int j=0;j<size;j++){
        if(arr[j]==searchEle){
            cout<<"The element present at : "<< j <<" th position"<<endl;
        }
    }

}