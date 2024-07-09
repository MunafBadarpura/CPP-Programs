#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter A String : ";
    getline(cin,str);
    int n = str.size();


    char max = '0';
    char smax = '0';
    // for(int i=0;i<n;i++){
    //     if(str[i]>max) max = str[i];
    // }
    // for(int i=0;i<n;i++){
    //     if(str[i]>smax  && str[i]!=max) smax = str[i];
    // }
    for(int i=0;i<n;i++){
        if(str[i]>max){
            smax = max;
            max = str[i];
        }
        else if(str[i]>smax  && str[i]!=max)  smax = str[i];
    }

    cout<<"Second max is :"<<smax;
    

}