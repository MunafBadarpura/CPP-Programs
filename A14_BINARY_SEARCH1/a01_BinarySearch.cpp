#include<iostream>
using namespace std;
int main(){
    int target = 8;
    int n = 7;
    int arr[] = {-4,-1,5,4,8,9,10};

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo+hi)/2;  // mid = lo + ((hi-lo) / 2); 
        if(arr[mid] == target){
            flag = true;
            break;
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }

    cout<<flag;
}