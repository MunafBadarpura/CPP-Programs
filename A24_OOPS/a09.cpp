#include<iostream>
using namespace std;

class Student{
public:    
    int rNo;
    int age;
    string name;

};

int main(){
   Student x;
   x.age = 20;
   x.rNo = 12;
   x.name = "Aman";
   
   cout<<x.age<<"\n";
   cout<<x.rNo<<"\n";
   cout<<x.name<<"\n";

}