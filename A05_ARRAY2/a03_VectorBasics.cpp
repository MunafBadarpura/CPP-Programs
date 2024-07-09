#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v;
    // v.push_back(8);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(4);

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    
    
    vector<int> v1;
    v1.push_back(8);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(4);

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
    v1.pop_back();
    v1.pop_back();
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}