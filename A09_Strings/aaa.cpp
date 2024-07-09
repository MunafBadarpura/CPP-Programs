#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=3;
    int m=4;
    vector<vector<int>> v;

    for(int i=0;i<m;i++){
        vector<int> a(i+1);
        v.push_back(a);
    }

    cout<<"Enter Array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }


    cout<<"Enter Array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }



}