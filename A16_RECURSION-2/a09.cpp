#include<iostream>
using namespace std;
int fun(int n,int count){
    if(n==0) return count;
    if(n%2==0){
        count++;
        fun(n/2,count);
    }
    else{
        count++;
        fun(n-1,count);
    }
}
int main(){
    int n = 14;
    int count = 0;
    cout<<fun(n,count);
    
}