#include<iostream>
using namespace std;
void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverseArray(int arr[], int size){
    for(int i=size;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printArr(arr, size);
    reverseArray(arr,size);
}