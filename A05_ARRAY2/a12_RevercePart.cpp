#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void reverse(int i,int j,vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
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

    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     //SWAPPING
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }

    int k;
    cout<<"Enter k:";
    cin>>k;
    
    if(k>n) k = k % n;
    reverse(0,n-1-k,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}