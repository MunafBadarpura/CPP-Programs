#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int ans[n-k+1];
    int m = n-k+1;

    for(int i=0;i<=n-k;i++){
        for(int j=i;j<k+i;j++){
            if(arr[j]<0){
                ans[i] = arr[j];
                break;
            }
        }
    }
    
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    
}