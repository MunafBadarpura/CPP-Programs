#include<iostream>
using namespace std;

class Student{
public:    
    string name;
    int rNo;
    int age;

    static int noOfStudents;  //Static Keyword

    //Cunstructor
    Student(string name, int rNo , int age){
        this->name = name;
        this->rNo = rNo;
        this->age = age;
        noOfStudents++;
    }
};

int Student::noOfStudents = 0;  //Assinging Value

int main(){
    
   Student x("Rahul",05,15);
   cout<<x.noOfStudents<<"\n";
   Student y("Rajul",10,18);
   cout<<y.noOfStudents<<"\n";



    //x.name = "Aman";
    //x.rNo = 12;
    //x.age = 20;

    // cout<<x.age<<"\n";
    // cout<<x.rNo<<"\n";
    // cout<<x.name<<"\n";
}