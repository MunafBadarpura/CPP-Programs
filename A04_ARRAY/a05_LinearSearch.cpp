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
    cout<<"Enter Element You Want to search :"<<endl;
    cin>>x;

    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"Element Present";
    else cout<<"Not Present";

}