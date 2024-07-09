#include<iostream>
using namespace std;
int fun(int n,int ans){
    if(n==0) return ans;
    ans = ans*10 + (n%10);
    fun(n/10,ans);
    return fun(n/10,ans);
}
int main(){
    int n = 1234;
    int ans = 0;
    cout<<fun(n,ans);
    
}