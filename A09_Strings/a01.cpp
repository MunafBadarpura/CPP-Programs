#include<iostream>
using namespace std;
int main(){
    string str1 = "Munaf Badarpura";
    cout<<str1<<endl;
    cout<<str1[0]<<endl;


    /*String Initilaitatin
    string string name = "Hello";    */

    /*string str;
    cin>>str; //Only For One Word.
    cout<<str;*/

    string str;
    getline(cin,str); // with spaces
    cout<<str;

}