#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Number of Rows :";
    cin>>n;
    cout<<"Enter Number of Columns :";
    cin>>m;
    int arr[n][m];

    cout<<"Enter Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int l1,r1,l2,r2,sum=0;
    cout<<"Enter l1 and l2 : ";
    cin>>l1>>l2;
    cout<<"Enter r1 and r2 : ";
    cin>>r1>>r2;

    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j];
        }
    }

    cout<<"sum = : "<<sum;
    
}