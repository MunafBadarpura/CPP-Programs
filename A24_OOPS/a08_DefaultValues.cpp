#include<iostream>
using namespace std;

class Student{
public:    
    int rNo = 10;  // setting Default Values
    int age = 20 ;
    string name = "RAguu";

};

int main(){
   Student x;
   x.rNo = 12;    // Default Values We CAn Change
   x.age = 30;
   x.name = "Aman";
   
   cout<<x.rNo<<"\n";
   cout<<x.age<<"\n";
   cout<<x.name<<"\n";

}