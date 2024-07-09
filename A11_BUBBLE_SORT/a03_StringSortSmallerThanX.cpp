#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "AZYZXBDJKX";
    string str1;
    for(int i=0;i<str.length();i++){
        if(str[i]>='X'){
            str1.push_back(str[i]);
        }
    }
    //sorting
    for(int i=0;i<str1.length()-1;i++){
        bool flag = true;
        for(int j=0;j<str1.length()-1;j++){
            if(str1[j]>str1[j+1]){
                swap(str1[j],str1[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }

    cout<<str1;
}