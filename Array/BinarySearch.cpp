#include<iostream>
using namespace std;
int binarySearch(int arr[],int low, int high, int x){
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements in a sorted manner : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the search element: "<<endl;
    cin>>x;
    int high = sizeof(arr)/sizeof(arr[0]);
    int res = binarySearch(arr, 0, high-1, x);
    if(res == -1){
        cout<<"Element not present in the given array";
    }else{
        cout<<"Element present in the index is "<< res;
    }
}
