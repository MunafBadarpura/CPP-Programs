#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    int age;

    Student(string n,int r,int a){
        age = a;
        name = n;
        rno = r;
    }
};
void change(Student* s){
    s->name = "NAme";
}
int main(){
    Student s("Munaf",72,17);

    cout<<s.name<<endl;
    Student *ptr = &s; 
    //(*ptr).name = "Hasan";   //Same
    //ptr->name = "Jass";      //Same
    change(&s);                //Same
    cout<<s.name<<endl;
}