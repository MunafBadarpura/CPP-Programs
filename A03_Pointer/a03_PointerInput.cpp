#include<iostream>
using namespace std;

int main(){
    int a,b;
    int* p=&a;
    int* p1=&b;

    cout<<"Enter First Number :";
    cin>>*p;
    cout<<"Enter Second Number :";
    cin>>*p1;

    cout<<a<<" "<<b<<endl;
    cout<<*p<<" "<<*p1<<endl;
    

}