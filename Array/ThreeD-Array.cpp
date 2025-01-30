#include<iostream>
using namespace std;
int main(){
    int arr[4][2][3] = {{{1,2,3},{9,8,7}},
    {{10,11,12},{20,21,22}},
    {{50,51,52},{90,91,92}},
    {{0,1,1},{5,5,5}}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                cout<<arr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}