#include<iostream>
using namespace std;
int findLargest(int arr[], int size){
    int largest = arr[0];
    for(int i=0;i<size;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    return largest; 
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
    cout<<"The Largest element of the array is: "<<findLargest(arr, size);
}