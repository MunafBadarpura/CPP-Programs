#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "my name is munaf";
    // cout<<"Enter String 1 : ";
    // getline(cin,str);
    int n = str.size();

    string word = " ";  //my 
    string maxword =  " ";
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            maxword = word;
             word = " ";
        }
        else{
             word = word + str[i];
        }
    }

    if(word>maxword) maxword = word;
    cout<<maxword;

}