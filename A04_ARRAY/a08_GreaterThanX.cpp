#include<iostream>
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

    int x;
    cout<<"Enter X :"<<endl;
    cin>>x;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;

}