#include<iostream>
#include<vector>
using namespace std;
void large(vector<int> &v, int n){
    int max=0,max2=0,max3=0;
    for(int i=0;i<n;i++){
        if(v[i]>max) {
            max3=max2;
            max2=max;
            max=v[i];
        }
        else if(v[i]<max2){
            max3=max2;
            max2=v[i];
        }
        else if (v[i]<max3) {
            max3=v[i];
        }
    }

    cout<<"Max 1 :"<<max<<endl;
    cout<<"Max 2 :"<<max2<<endl;
    cout<<"Max 3 :"<<max3<<endl;
}
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
    
    large(v,n);
    
}