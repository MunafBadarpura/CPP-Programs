#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,10,3,2};
    int n =  sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i] = arr[i] - arr[i-1];
    }

    bool flag = false;
    int idx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]*2 == arr[n-1]){
            flag = true;
            idx = i;
            break;
        } 
    }

    cout<<"Index is "<<idx<<endl;
    if(flag) cout<<"Yes, It can be partiotioned";
    else cout<<"No , it cannot be partiotioned";
}