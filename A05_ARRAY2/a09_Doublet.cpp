#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
   int n;
   cout<<"Enter Size Of Array :";
   cin>>n;

   vector<int> v;
   //INPUT
   for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
   }

    int x;
    cout<<"Enter X:";
    cin>>x;

    cout<<"Doublets = ";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
}