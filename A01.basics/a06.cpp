#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Any Number :";
    cin>>n;

    int a = 0;


    for(int i = 2;i<=n-1;i++){
        if(n%i==0) {
            a=1;  //not orime
            break;
        }
        else a=0;
    }

    if(n==1) cout<<"not prime not composite";
    else if(a==1) cout<<"Not Prime";
    else cout<<"Prime";
}