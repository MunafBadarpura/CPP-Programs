#include<iostream>
using namespace std;
class Fraction{
public:
    int num;
    int den;

    Fraction(int num, int den){
        this->num = num;
        this->den = den;
    }

    void simplify(){
        if(num<den){
            if(den%num==0){
                den = den/num;
                num = 1;
            }
        }
    }
};
int main(){

    Fraction f1(7,21);
    cout<<f1.num<<"/"<<f1.den<<endl;
    f1.simplify();
    cout<<f1.num<<"/"<<f1.den<<endl;

    // Fraction f2 = Fraction(7,3);
    // cout<<f2.num<<"/"<<f2.den<<endl;

}