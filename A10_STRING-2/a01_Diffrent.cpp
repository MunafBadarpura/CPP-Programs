#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    int count = 0;
    int n = str.length();

   for(int i=0;i<n;i++){
        if(n==1){
            break;
        }
        if(str[i]==0 && str[i] != str[i+1])
            count++;
        else if(str[i]!= str[i+1] && str[i]!=str[i-1])
            count ++;
        else if(str[i]==n-1 && str[i]!=str[i-1])
            count++;
   }
   cout<<count;
}