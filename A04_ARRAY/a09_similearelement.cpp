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
    // int a=arr[0];
    bool flag = false;
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            } 
       }
    }

    if(flag==true) cout<<"Same elements exist";
    if(flag==false) cout<<"Same elements dosen't exist";

}