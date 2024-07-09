#include<iostream>
    using namespace std;
    int main(){
        char ch;
        cout<<"Enter A Character Or Number :"<<endl;
        cin>>ch;
        int ascii = (int) ch;
        // cout<<ascii;  

        if(ascii>=97 && ascii<=122){
            cout<<"This is a small character";
        }     
        else if(ascii>=65 && ascii<=90){
            cout<<"This is a Capital character";
        }
        else if(ascii>=48 && ascii<=57){
            cout<<"This is a Number";
        }
        else{
            cout<<"This is a Special Character";
        }

        // int n=10;
        // cout<<(n=20);
        
    }
