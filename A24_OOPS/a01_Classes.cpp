#include<iostream>
using namespace std;

class Student{
    public:
    //Data Member
    char name[10];
    int score;
    int health;

    //Member Function
    void showHealth(){
        cout<<"Health is : "<<health;
    }

    void showScore(){
        cout<<"Score is : "<<score;
    }
};

int main(){

    Student amit;
    amit.score = 50; 
    amit.health = 90; 

    cout<<amit.score<<endl;
    cout<<amit.health<<endl;
    amit.showHealth();
    cout<<endl;
    amit.showScore();
}