#include<iostream>
using namespace std;

class Student{
public:    
    int rNo;
    int age;
    string name;

};

void print(Student &a){   //Class is pass by Value , not passby reffrence
    a.age = 10;
    a.rNo = 30;
    a.name = "Rahul";
}

int main(){
   Student x;
   x.age = 20;
   x.rNo = 12;
   x.name = "Aman";
   
   cout<<x.age<<"\n";
   cout<<x.rNo<<"\n";
   cout<<x.name<<"\n";

   print(x);
   cout<<endl;

   cout<<x.age<<"\n";
   cout<<x.rNo<<"\n";
   cout<<x.name<<"\n";
}