#include<iostream>
using namespace std;

class vehicle{
public: 
    int EngineSize;
    int tyreSize;
    int lights;
    string companyName;

    vehicle(){
        cout<<"vehicle Ka Constructor Call Hua\n";
    }
};

class Car : public vehicle{  // Here , Car Inherites  Vehicle(Car Is a Derived class)
public:
    int steeringSize;
};

class Bike : public vehicle{ // Here , Bike Inherites  Vehicle(Bike Is a Derived class)
public:
    int handleSize;

    Bike(){
        cout<<"Bike Ka Constructor Call Hua\n";
    }
};

int main(){
    Bike bmw;
    bmw.EngineSize = 20; // we can access the properties of parant Class
    bmw.lights = 10;


}