#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a = *b;
    *b = temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter A :"<<endl;
    cin>>a;
    cout<<"Enter B :"<<endl;
    cin>>b;
    
    swap(&a,&b);
    cout<<" A :"<<a<<endl;
    cout<<" B :"<<b<<endl;

}