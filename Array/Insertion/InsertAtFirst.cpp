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
    cout<<"Enter the Element at the beginning: ";
    cin>>x;
    for(int i=size;i>0;i--){
        arr[i]=arr[i-1];
    }
arr[0] = x;
size++;
printArr(arr,size);
}