#include<iostream>
using namespace std;
void greet(int arr[],int x,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        // if(arr[i]>x) cout<<arr[i]<<" ";
        if(arr[i]>x) count++;
    }
    cout<<count;
    return;
}
int main(){
    int n;
    cout<<"Enter Size :";
    cin>>n;
    int arr[n];
    cout<<"Enter Array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     int x;
    cout<<"Enter X :";
    cin>>x;

    greet(arr,x,n);
    
}