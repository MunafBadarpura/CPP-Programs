#include<iostream>
using namespace std;
void fun(int arr[],int n,int i){
    if(i==n) return;
    cout<<arr[i]<<" ";
    fun(arr,n,i+1);
}
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    fun(arr,n,0);
}
