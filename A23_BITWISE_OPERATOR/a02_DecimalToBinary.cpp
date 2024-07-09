#include<iostream>
#include<climits>
using namespace std;
int main(){
    int num = 13;

    string binary = "";
    while(num>0){
        if(num%2==0){ //even
            binary = '0' + binary;
        }
        else{ // odd
            binary = '1' + binary;
        }
        num = num / 2;
    }

    cout<<binary;
}