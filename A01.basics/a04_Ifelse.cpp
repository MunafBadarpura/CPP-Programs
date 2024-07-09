#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost Price : ";
    cin>>cp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    int sum = sp-cp;
    if(sp>cp){
        // int sum = sp-cp;
        cout<<"You Get Profit Of : "<<sum;
    }
    else if(sp<cp){
        // int sum = cp - sp;
        cout<<"You Get Loss Of : "<<-sum;
    }
    else{
        cout<<"You Get No Profit No Loss";
    }
}
