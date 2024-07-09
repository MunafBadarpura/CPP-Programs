#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5] = {5,1,2,3,4};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //sorting
    for(int i=0;i<n-1;i++){
        //travers
        bool flag = true; //sorted
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}