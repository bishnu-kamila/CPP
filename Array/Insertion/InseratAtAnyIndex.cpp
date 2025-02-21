#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"The array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100], n,x;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    cout<<"Enter the element which we want to insert: "<<endl;
    cin>>x;
    int p;
    cout<"Enter the index where we insert: "<<endl;
    cin>>p;
    for(int i=n;i>=p;i--){
        arr[i]=arr[i-1];
    }
    arr[p]= x;
    n++;
    printArray(arr,n);
}