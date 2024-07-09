#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size :";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    bool flag = true;
    for(int i =0;i<n;i++){
        if(v[i]<v[i+2]) flag=true;
        else{
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Sorted";
    else cout<<"UnSorted";
    
}