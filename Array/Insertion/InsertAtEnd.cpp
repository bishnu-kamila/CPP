#include<iostream>
using namespace std;
void printArr(int arr[], int size){
    cout<<"The array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100] = {1,2,3,48};
    int size = 4;
    printArr(arr,size);
    int x;
    cout<<"Enter the Element which we are going to insert at the end: ";
    cin>>x;
    
arr[size] = x;
size++;
printArr(arr,size);
}