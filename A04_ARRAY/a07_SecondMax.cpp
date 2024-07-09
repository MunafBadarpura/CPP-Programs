#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of Array : ";
    cin>>n;
    cout<<"Enter Elements :"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax = arr[0];
    for(int i = 1;i<n;i++){
        if(smax<arr[i] && arr[i]!=max) smax=arr[i];
    }
    cout<<"Second Max : "<<smax<<endl;

    // int tmax = arr[0];
    // for(int i=1;i<n;i++){
    //     if(tmax<arr[i] && arr[i]!=smax && arr[i]!=max) tmax=arr[i];
    // }

    // cout<<"Third Max : "<<tmax;
}