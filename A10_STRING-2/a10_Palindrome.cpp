#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter String :";
    getline(cin,str);
    int n = str.size();
    bool flag = true;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            flag = false;
            break;
        }
    }

    if(flag==true) cout<<"This Is Palindrome";
    else cout<<"Not Palindrome";
}