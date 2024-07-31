#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter Size Of Array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<"SUM = "<<sum;

}