#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[] = {0,0,1,1,1,1,1};
    int lo = 0;
    int hi = n-1;
    int ans;
    bool flag = false;

    while(lo<=hi){
        int mid = lo + (hi-lo) / 2;
        if(arr[mid] == 0 && mid==0){
            cout<<mid;
            flag = true;
            break;
        }
        else if(arr[mid] == 1){
            if(arr[mid-1] != 1){
                ans = n-mid;
                break;
            }
            else hi = mid -1; 
        }
        // else if(arr[mid] > 1) hi = mid - 1;
        else lo = mid + 1;
    }

    if(flag == false) cout<<ans;
    
}