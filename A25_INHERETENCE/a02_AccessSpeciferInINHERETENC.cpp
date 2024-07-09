#include<iostream>
using namespace std;

class A{
private:   //Can't Be Accessed , Can't Be Inhereted;
    int aPrivate;
protected: //Can't Be Accessed , Can Be Inhereted;
    int aProtected;
public:    //Can Be Accessed , Can Inhereted;
    int aPublic;
};

class B : public A{ // this access specifer use = a se jobhi aaega b ke liye public ban jaaega
public :
    int bPublic;

    void show(){
        //aPrivate = 10;  //Can't be accessed
        aProtected = 20;  //accessed
        // aPublic = 30;     //accessed
    }
};

class C : public B{
public:
    int cPublic;

    void show(){
        aProtected = 20;
        aPublic = 10;
        bPublic = 10;
    }
};

int main(){
        A a;
        //a.Private = 10;  //Can't be accessed
        //a.Protected = 20;  //Can't be accessed
        a.aPublic = 30;     //accessed
}