#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Rows/columns :";
    cin>>n;
    int arr[n][n];

    cout<<"Enter Matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                cout<<arr[i][j]<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }



}    