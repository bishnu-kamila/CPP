#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"The array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    printArray(arr,size);
    
    size--;
    printArray(arr,size);
}