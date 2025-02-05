#include<iostream>
using namespace std;
int Sum(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The sum of all elements present in an array is: "<<Sum(arr, size);
}