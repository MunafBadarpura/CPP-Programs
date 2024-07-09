//WITHOUT EXTRA PAAMETERS
#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;  //base case
    fun(n-1);  //call
    cout<<n<<endl;  //kaam
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;

    fun(n);
}

//WITH EXTRA PARAMETRES
// #include<iostream>
// using namespace std;
// void fun(int i,int n){
//     if(i>n) return;
//     cout<<i<<endl;
//     fun(i+1,n);
// }

// int main(){
//     int n;
//     cout<<"Enter N : ";
//     cin>>n;

//     fun(1,n);
// }