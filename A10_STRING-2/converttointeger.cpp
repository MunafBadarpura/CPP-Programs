#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter String :";
    getline(cin,str);
    int n = str.size();

    int ans = 0; //
    int product = 1;

    for(int i=n-1;i>=0;i--){
        int ans = ans + (str[i] - 0) * product;
        product*=10;
    }

    cout<<str;

}