#include<iostream>
using namespace std;
int main(){
    int arr[7] = {10,65,34,80,60,51,30};
    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];
    // cout<<arr[3];
    // cout<<arr[4];
    // cout<<arr[5];
    // cout<<arr[6];


    // with loop

    // for(int i=0;i<=6;i++){
    //     cin>>arr[i];
    // }

    for(int i=0;i<=6;i++){
        if(arr[i]<35) cout<<i<<endl;
    }
}