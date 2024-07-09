#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){
    if(n==0) return;

    hanoi(n-1,a,c,b); //for n-1 disks
    cout<<a<<" -> "<<c<<endl;  //for nth disk
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cout<<"Enter Number Of Disk : ";
    cin>>n;

    hanoi(n,'A','B','C');
}