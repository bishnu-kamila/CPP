#include<iostream>
using namespace std;
int searchEle(int arr[], int size, int ele){
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            return arr[i];
        }
    }
}
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int ele;
    cout<<"Enter the finding element: ";
    cin>>ele;
    int arr[size];
    cout<<"Enter the element of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    searchEle(arr,size,ele);
}