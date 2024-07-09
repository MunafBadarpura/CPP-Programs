//This IS A Worst Code --->
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5] = {3,4,2,1,5};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //sorting
    for(int i=0;i<n-1;i++){
        //travers
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}