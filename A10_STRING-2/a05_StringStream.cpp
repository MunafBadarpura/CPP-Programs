#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Munaf  is Student";
    stringstream ss(str);
    string temp;
    
    while(ss>>temp){
        cout<<temp<<endl;
    }
}