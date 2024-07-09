#include<iostream>
using namespace std;
int main(){
    string s = "abcdef"; 
    cout<<s.substr(1)<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(2,3)<<endl;  // s.substr(idx,length)
    cout<<s.substr(1,3)<<endl;  // bcd

    // TO STRING
    int a = 123456;
    string str = to_string(a);
    cout<<str<<endl;
    cout<<str.length();


}