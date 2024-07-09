#include<iostream>
using namespace std;

int fact(int x){
    int a = 1;
    for(int i=2;i<=x;i++){
        a = i*a;
    }
    return a;
}
int combination(int n , int r){
    int ncr = fact(n) /( fact(r) * fact(n-r) );
    return ncr;
}

int permutation(int n , int r){
    int npr = fact(n) /fact(n-r);
    return npr;
}

int main(){
    int n,r;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter r :";
    cin>>r;

    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n-r);
    
    // int ncr=nfact/(rfact*nrfact);
    // cout<<"Combition = "<<ncr<<endl;

    // int npr=nfact/nrfact;
    // cout<<"Permutation = "<<npr<<endl;

    cout<<"Combition = "<<combination(n,r)<<endl;
    cout<<"Permutation = "<<permutation(n,r)<<endl;

}