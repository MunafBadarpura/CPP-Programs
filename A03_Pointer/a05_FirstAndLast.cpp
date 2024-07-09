#include<iostream>
using namespace std;
void change(int n,int* ptr1,int* ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/=10;
    }
    *ptr1=n;
}
int main(){
    int n;
    cout<<"Enter Number :"<<endl;
    cin>>n;

    int firstdigit,lastdigit;
    int* ptr1 = &firstdigit;
    int* ptr2 = &lastdigit;

    change(n,ptr1,ptr2);

    cout<<"FirstDigit = "<<firstdigit<<endl;
    cout<<"LastDigit = "<<lastdigit<<endl;
    

}