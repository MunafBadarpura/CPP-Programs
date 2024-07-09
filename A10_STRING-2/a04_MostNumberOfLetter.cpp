#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter String  : ";
    getline(cin,str);

    int max = 0;
    for(int i=0;i<str.length();i++){
        int count = 1;
        for(int j = i+1;j<str.length();j++){
            if(str[j]==str[i]) count++;
        }
        if(count>max) max = count;
    }

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count = 1;
        for(int j = i+1;j<str.length();j++){
            if(str[j]==str[i]) count++;
        }
        if(count==max) {
            cout<<ch<<" "<<max<<endl;
        }
    }
    
}