#include<iostream>
using namespace std;
void PrintArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int QuickSort(int arr[], int size, )
int main(){
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    int arr[size];
    cout<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    PrintArray(arr, size);
}