#include<iostream>
using namespace std;

int star(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
   
}
int main(){
    int a;
    cout<<"Enter Number Of Lines For A:";
    cin>>a;
    int b;
    cout<<"Enter Number Of Lines For B:";
    cin>>b;
    int c;
    cout<<"Enter Number Of Lines For C:";
    cin>>c;

    star(a);
    star(b);
    star(c);


    
}