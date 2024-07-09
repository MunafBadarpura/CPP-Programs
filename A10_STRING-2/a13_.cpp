#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter A String : ";
    getline(cin,str);
    int n = str.size();

    int ans = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i'  || str[i]=='o' || str[i]=='u'){
            count++;
        }
        else{
            ans+= (count* (count+1)) / 2;
            count=0;
        }
    }

    ans+= (count* (count+1)) / 2;
    cout<<ans;

}