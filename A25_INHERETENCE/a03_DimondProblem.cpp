#include<iostream>
using namespace std;

class A{
public:    
    int aPublic;
};

class B :virtual public A{ 
public :
    int bPublic;
};

class C :virtual public A{
public:
    int cPublic;
};

class D : public B , public C{
public:
    int dPublic;

    void show(){
        aPublic = 20;
        cout<<aPublic;
    }
};

int main(){
    D d;
    d.show();

    A aClass;
    A *addOfA;
    addOfA = &aClass;

    cout<<addOfA<<endl;

    A a;
    int aPublic = 10;
    int *add;
    add = &aPublic;

    cout<<*add<<endl;

}
