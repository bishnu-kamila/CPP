#include<iostream>
using namespace std;
void printArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void findDuplicate(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element is "<<arr[i]<<endl;
            }
        }
    }
}
int main(){
    int size;
    cout<<"Enter the size";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printArr(arr, size);
    findDuplicate(arr, size);
}