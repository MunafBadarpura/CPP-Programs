#include<iostream>
using namespace std;
int fact(int n){
    //Base Case
    if(n==1 || n==0) return 1; 
    //Recursive Call
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;

    cout<<fact(n);
}