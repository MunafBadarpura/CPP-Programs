#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int arr[] = {1,1,2,3,4,5,6,7,8,9};
    int lo = 0;
    int hi = n-1;
    

    while(lo<=hi){
        int mid = lo + (hi-lo) / 2;
        if(arr[mid] == mid){
            if(arr[mid-1] == arr[mid]){
                cout<<arr[mid];
                break;
            }
            else{
                hi = mid - 1; 
            }
        }
        else lo = mid + 1;
    }

    
}