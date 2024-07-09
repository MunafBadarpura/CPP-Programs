#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);

    sort(str.begin(),str.end());  //THIS IS FOLLOWING ASCII VALUES
    cout<<str;
    
}