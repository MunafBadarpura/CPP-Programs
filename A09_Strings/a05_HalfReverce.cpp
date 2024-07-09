#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    // string str = "abcdefgh";  //0 1 2 3 4 5 6 7
    // cout<<"Before : "<<str<<endl;
    // reverse(str.begin()+0,str.end()-4);
    // cout<<"After : "<<str;

    string s;
    cout<<"Enter String in Even Size: ";
    getline(cin,s);

    reverse(s.begin(),s.end()-s.size()/2);
    cout<<s;
}