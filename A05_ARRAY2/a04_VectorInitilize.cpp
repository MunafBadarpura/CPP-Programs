#include<iostream>
#include<vector>
using namespace std;
int main(){
 

    vector<int> v(5);
    // v[0]=10;
    // v[1]=20;
    // v[2]=30;
    // v[3]=20;
    // v[4]=10;
    // v[5]=60;
    // v[6]=60;
    // v[7]=60;
    // v[8]=60;
    int n;
    cout<<"Enter Size Of Array :";
    cin>>n;

    cout<<"Enter Array :";
     for(int i=0;i<n;i++){
        cin>>v[i];
    }
     for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }


}