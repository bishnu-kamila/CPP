#include<iostream>
using namespace std;
int FindSecLargestEle(int arr[], int size){
    int largest = 0;
    int secL = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
             if(arr[i]>arr[j]){
            largest = arr[i];
            secL = arr[j];
        }
        }
    }
    return secL;
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