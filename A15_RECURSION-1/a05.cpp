#include<iostream>
using namespace std;
void fun(int &sum,int a,int b){
    if(a>b) return;


    if(a%2!=0){
        sum+=a;
        fun(sum,a+2,b);
    }
    else fun(sum,a+1,b);
    return;
}

int main(){
    // int n;
    // cout<<"Enter N : ";
    // cin>>n;
    int sum = 0;
    fun(sum,2,10);
    cout<<sum;
}