#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(n);
    for(int i=0;i<n;i++){
        if(i==0) v[i] = arr[i];
        else v[i] = arr[i] + v[i-1];
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    
}