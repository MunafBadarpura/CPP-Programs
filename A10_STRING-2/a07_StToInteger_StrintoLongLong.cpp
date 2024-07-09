#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    // string to integer
    string str = "12345";
    int x = stoi(str);
    cout<<x+1<<endl;

    //integer to string
    int a = 1000;
    string s = to_string(a);
    cout<<s<<endl;

    //string to long
    string str1 = "12345678932145";
    long long l = stoll(str1);
    cout<<l;
}