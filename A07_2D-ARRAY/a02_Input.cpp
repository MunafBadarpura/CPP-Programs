#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Rows :";
    cin>>n;
    cout<<"Enter Columns :";
    cin>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
     }

     //Print
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}