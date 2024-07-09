#include<iostream>
using namespace std;
class Bike{
public:
    int EngineSize;
    int tyreSize;

    //Constructor Overloading
    Bike(int es,int ts) : EngineSize(es) , tyreSize(ts){}
    Bike(int es) : EngineSize(es) , tyreSize(15){}
    Bike() : EngineSize(100) , tyreSize(100){}
};

int main(){
    Bike bajaj(350,15);
    Bike honda(100);
    Bike bmw;

    cout<<bmw.tyreSize;
}




