#include<iostream>
// #include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter A String : ";
    getline(cin,str);
    int n = str.size();

    string str2 = str;

    for(int i=0;i<n/2;i++){
       swap(str[i],str[n-i-1]); 
    }

    cout<<str2+str;

}