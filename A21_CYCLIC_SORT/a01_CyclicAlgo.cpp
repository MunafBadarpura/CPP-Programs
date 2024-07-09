#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {3,4,1,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // int i=0;
    // while(i<n){
    //     int a = i+1;
    //     if(a==arr[i]) i++;
    //     else swap(arr[i],a);
    // }

    int i=0;
    while(i<n){
        int correctIdx = arr[i] - 1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}