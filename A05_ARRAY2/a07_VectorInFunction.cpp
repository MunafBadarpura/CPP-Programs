#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void change(vector<int> &a){    //vector is pass by value.
    a[0]=100;
}
int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}