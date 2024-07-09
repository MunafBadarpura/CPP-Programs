#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;

    // Bike(){
    //     cout<<"Constuctor Call Hua!"<<"\n";
    // }
    //Destructor
    ~Bike(){
        cout<<"Destuctor Call Hua!"<<"\n";
    }
};
int main(){

    bool f = true;
    if(f==true){
        Bike bmw;
    }

    cout<<"After If :"<<"\n";
    Bike ktm;
    cout<<"After ktm"<<"\n";
    Bike tvs;

}