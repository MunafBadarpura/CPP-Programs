//Upper Bound--->
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int n = 9;
    int arr[] = {1,2,4,5,9,15,18,21,24};

    int lo = 0;
    int hi = n-1;
    bool flag = true;
    while(lo<=hi){
        int mid = lo + ((hi-lo) / 2);
        if(arr[mid] == x){
            flag = false;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==true) cout<<arr[hi];

}

//Lower Bound--->
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     int n = 9;
//     int arr[] = {1,2,4,5,9,15,18,21,24};

//     int lo = 0;
//     int hi = n-1;
//     bool flag = true;
//     while(lo<=hi){
//         int mid = lo + ((hi-lo) / 2);
//         if(arr[mid] == x){
//             flag = false;
//             cout<<arr[mid+1];
//             break;
//         }
//         else if(arr[mid]<x) lo=mid+1;
//         else hi=mid-1;
//     }
//     if(flag==true) cout<<arr[lo];

// }