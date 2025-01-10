#include<iostream>
using namespace std;
void PrintArray(int arr[], int size){
    cout<<"The array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    PrintArray(arr, size);
    return 0;
}
