#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cout<<"Enter String 1 : ";
    getline(cin,str1);

    string str2;
    cout<<"Enter String 2 : ";
    getline(cin,str2);

    // sort(str1.begin(),str1.end());
    // sort(str2.begin(),str2.end());
    
    // if(str1==str2) cout<<"This Is Anagram";
    // else cout<<"This Is Not Anagram";


    //SECOND METHOD-->

    int count[26] = {0};
    if(str1.size() != str2.size() ) cout<<" Not Anagram";
    else{
        for(int i=0;i<str1.size();i++){
            count[str1[i] - 'a']++;
            count[str2[i] - 'a']--;

        }
    
    int a = 1;
    for(int i=0;i<26;i++){
        if(count[i] != 0){
            a = 0; 
            break;
        }
    }
    if(a==0)  cout<<"Not Anagram";
    else  cout<<" Anagram";

    }
    
}