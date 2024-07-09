#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Any Number :"<<endl;
    cin>>n;
    // int a = 1;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<k<<" ";
            
        }
            // a+=2;
            cout<<endl;
    }
          
}