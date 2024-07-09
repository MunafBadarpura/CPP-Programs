#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0) return 0;
    return n+Sum(n-1);

}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;

    cout<<Sum(n);
}

//With extra parameter
// #include<iostream>
// using namespace std;
// void Sum1toN(int sum,int n){
//     if(n==0){
//         cout<<sum;
//         return;
//     } 
//     Sum1toN(sum+n,n-1);

// }

// int main(){
//     int n;
//     cout<<"Enter N : ";
//     cin>>n;

//     Sum1toN(0,n);
// }