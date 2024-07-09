#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string str = "abcdef";  //0 1 2 3 4 5
    cout<<"Before : "<<str<<endl;
    reverse(str.begin()+1,str.end()-2);
    cout<<"After : "<<str;
}