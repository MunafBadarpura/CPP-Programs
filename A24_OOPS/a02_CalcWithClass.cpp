#include<iostream>
using namespace std;
class Calculator{
public:
    int a;
    int b;

    void add(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
};

int main(){
    Calculator calc;
    cout<<"Enter A :";
    cin>>calc.a;
    cout<<"Enter B :";
    cin>>calc.b;
    
    calc.add();
    calc.subtract();
}