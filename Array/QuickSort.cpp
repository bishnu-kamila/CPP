#include<iostream>
using namespace std;
void PrintArray(int arr[], int size){
    cout<<"The array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int Partition(int arr[], int low, int high){
    int pivert = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivert){
            i++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void QuickSort(int arr[], int low, int high){
    if(low<high){
        int pivert = Partition(arr, low, high);
        QuickSort(arr, low, pivert-1);
        QuickSort(arr, pivert+1, high);
    }
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
    PrintArray(arr, size);
    QuickSort(arr, 0, size-1);
    PrintArray(arr, size);
}