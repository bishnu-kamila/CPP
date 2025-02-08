#include<iostream>
using namespace std;
int FindSecLargestEle(int arr[], int size){
    int largest = arr[0];
    int secL = arr[0];
    for(int i=0;i<size;i++){
            if(largest<arr[i]){
                largest=arr[i];
            }
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
    cout<<"The Second Largest element of the given array is: "<<FindSecLargestEle(arr, size);
}