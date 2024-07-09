#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter String :";
    getline(cin,str);

    for(int i=1;i<str.size();i+=2){
        str[i]='#';
    }

    cout<<str;
}