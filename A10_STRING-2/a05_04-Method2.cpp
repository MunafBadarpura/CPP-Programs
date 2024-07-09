#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter String  : ";
    getline(cin,str);

    vector<int> arr(26,0);
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int ascii = (int) ch;
        arr[ascii-97]++;
    }

    int max = 0;
    for(int i=0;i<26;i++){
        if(max<arr[i]) max = arr[i];
    }

    for(int i=0;i<26;i++){
        if(arr[i]==max){
            char ch = (char) i+97;
            cout<<ch<<" "<<max<<endl;
        }
    }
    
}