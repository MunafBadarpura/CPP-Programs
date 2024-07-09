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
   cout<<"Enter Array :";
   for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
   }

    vector<int> v1;
    // int a = n-1;

    for(int i=0;i<n;i++){
        v1.push_back(i);
    }

//     for(int i=0;i<n;i++){
//         v1[a]= v[i];
//         a--;
//    }

    for(int i=0;i<n;i++){
            v1[i] = v[n-1-i];
    }

   for(int i=0;i<n;i++){
    cout<<v1[i]<<" ";
   }

}