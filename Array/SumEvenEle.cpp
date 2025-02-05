#include<iostream>
using namespace std;
int sumEven(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
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
    cout<<"Sum of all even element present in the array is: "<<sumEven(arr, size);
}