#include<iostream>
using namespace std;
int main(){
    string str = "abcd";
   // cout<<str.length()<<endl;
   // cout<<str.size(); // same like length.

    string str2 = "abcd";
    cout<<"Before : "<<str2<<endl;
    str2.push_back('e');
    str2.push_back('f');
    // str2.push_back("gh"); Not Valid
    cout<<"After pushback : "<<str2<<endl;

cout<<endl;

    string str3 = "abcd";
    cout<<"Before : "<<str3<<endl;
    str3.pop_back();
    cout<<"After popback : "<<str3<<endl;

cout<<endl;

    string str4 = "abcd";
    cout<<"Before : "<<str4<<endl;
    str4 = str4 + "efg";
    // OR
    // string str5 = "efg";
    // str4 = str4 + str5;
    cout<<"After addition : "<<str4<<endl;

cout<<endl;

    string str5 = "abcd";
    cout<<"Before : "<<str5<<endl;
    str5 = "efg" + str5 ; 
    cout<<"After addition : "<<str5<<endl;




}