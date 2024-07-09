#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** dptr = &ptr;
    int*** ddptr = &dptr;

    cout<<a<<endl;  
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    cout<<dptr<<endl;
    cout<<&dptr<<endl;
    cout<<**dptr<<endl;
    cout<<***ddptr<<endl;


}