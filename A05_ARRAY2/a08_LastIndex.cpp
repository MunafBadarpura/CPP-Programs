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

    int idx = -1;
    // for(int i=0;i<n;i++){
    //     if(v[i]==x) idx=i;
    // }

    for(int i=n-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<"X Number Is lastly Found On Index "<<idx<<endl;
}