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
    cout<<"MAX : "<<max;
}