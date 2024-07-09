#include<iostream>
// #include<cmath>
using namespace std;
int minimume(int x,int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<minimume(a,b);
    // cout<<sqrt(25);
}