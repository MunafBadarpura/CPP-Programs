#include<iostream>
#include <climits>
using namespace std;
void fun(int arr[],int n,int i,int max){
    if(i==n){
        cout<<max;
        return;
    };
    if(max<arr[i]){
        max = arr[i];
    } 
    fun(arr,n,i+1,max);
}
int main(){
    int n = 5;
    int max = INT_MIN;
    int arr[5] = {2,4,8,5,1};
    fun(arr,n,0,max);
    // cout<<min;
}


// #include<iostream>
// #include <climits>
// using namespace std;
// int fun(int arr[],int n,int i){
//     if(i==n) return INT_MIN;
//     return max(arr[i],fun(arr,n,i+1));
// }
// int main(){
//     int n = 5;
//     int arr[5] = {6,4,8,50,1};
//     cout<<fun(arr,n,0);
// }
