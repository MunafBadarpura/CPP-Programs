#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Any Number :"<<endl;
    cin>>n;

    int nst=1;
    int nsp=n-1;

    for(int i=1;i<=2*n-1;i++){
        // spaces
        for(int j =1;j<=nsp;j++){
            cout<<"  ";
        }
        if(i<=n-1) nsp--;
        else nsp++;

        // stars
        for(int k=1;k<=nst;k++){
            cout<<"* ";   
        }
        if(i<=n-1) nst+=2;
        else nst-=2;

        cout<<endl;
    }
    // long long n = 46341;
    // long long sum = n * (n+1)/2;
    // cout<<sum;

          
}