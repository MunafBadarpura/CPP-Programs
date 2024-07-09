#include<iostream>
using namespace std;
int a = 9;

void fun(){
    a=2;
    cout<<a<<endl;
}
int main(){
    cout<<a<<endl;

   
    fun();
     cout<<a<<endl;
}