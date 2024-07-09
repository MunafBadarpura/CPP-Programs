#include<iostream>
using namespace std;
class Bike{
public:
    int EngineSize;
    int tyreSize;

    Bike(int es,int ts) : EngineSize(es) , tyreSize(ts){}
    
};
int main(){
    Bike bajaj(350,15);

    cout<<bajaj.EngineSize<<"\n";
    cout<<bajaj.tyreSize;
}
