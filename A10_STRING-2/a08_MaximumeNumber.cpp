#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size :";
    cin>>n;

    vector<string> v;
    cout<<"Enter String : ";
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    int max = stoi(v[0]);
    string Smax;
    for(int i=1;i<n;i++){
        int x = stoi(v[i]);
        if(x > max) {
            max = x;
            Smax = v[i]; 
        }
    }
    cout<<"Maximume String is : "<<Smax<<endl;
    cout<<"Maximume Integer is : "<<max;

}