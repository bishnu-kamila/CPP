#include<iostream>
using namespace std;
void traverseArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    traverseArray(arr,size);

}