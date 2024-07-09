#include<iostream>
#include<climits>
using namespace std;
int main(){
    string binary = {"001101"};
    int n = binary.size();
    int res = 0;

    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch - '0';
        res += num *(1 << (n-1-i)); 
    }

    cout<<res;
}