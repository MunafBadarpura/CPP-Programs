#include<iostream>
#include<climits>
using namespace std;
int countSetBits(int n){
    return __builtin_popcount(n);
}

int countSetBits2(int n){
    int count = 0;
    while(n>0){
        n = (n & (n-1));
        count++;
    }
    return count;
}
int main(){
    int n  = 13;
    cout<<countSetBits(n)<<endl;
    cout<<countSetBits2(n)<<endl;
}