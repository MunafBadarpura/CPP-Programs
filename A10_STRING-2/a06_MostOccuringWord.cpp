#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Munaf  is a Student He is a IT Student";
    stringstream ss(str);
    string temp;
    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]) cout<<v[i]<<" "<<endl;
        }
    }
}