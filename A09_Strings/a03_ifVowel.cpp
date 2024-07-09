#include<iostream>
using namespace std;
int main(){
    string str = "Munaf Badarpura";
    int count = 0;
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u' ){
            count++;
        } 
    }
    // int i=0;
    // while(str[i]!='\0'){
    //     if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o'|| str[i]=='u' ){
    //         count++;
    //     }
    //     i++; 
    // }
    cout<<count;
}