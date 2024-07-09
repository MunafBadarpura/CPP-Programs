#include<iostream>
using namespace std;
int fun(int n){
    if(n==0) return 0;
    // if(n>=0 && n<=9) return n;
    int sum = n%10 + fun(n/10);
    return sum;
}
int main(){
    int n = 12345;
    cout<<fun(n);
    
}