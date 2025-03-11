#include<iostream>
using namespace std;
int main(){
    int a[5],b[5],c[10];
    cout<<"Enter the element of 1st array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter the element of 1st array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        if(i<5){
            c[i]=a[i];
        }else{
            c[i]=b[i-5];
        }
    }

    cout<<"The array is: "<<endl;
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}