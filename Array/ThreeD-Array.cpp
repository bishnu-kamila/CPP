#include<iostream>
using namespace std;
int main(){
    int n,p,q;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    cout<<"Enter value of p: "<<endl;
    cin>>p;
    cout<<"Enter value of q: "<<endl;
    cin>>q;
    int arr[n][p][q] = {{{1,2,3},{9,8,7}},
    {{10,11,12},{20,21,22}},
    {{50,51,52},{90,91,92}},
    {{0,1,1},{5,5,5}}};




    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<q;k++){
                cout<<arr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}