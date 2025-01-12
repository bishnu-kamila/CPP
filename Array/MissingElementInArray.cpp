#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"The array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int findMissingEle(int arr[], int size){
    int sum=0,sumEle=0;
    for(int i=0;i<size;i++){
        sum = sum+i;
        sumEle = sumEle+arr[i];
    }
    return sum-sumEle;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printArray(arr,size);
    cout<<findMissingEle(arr,size);
}