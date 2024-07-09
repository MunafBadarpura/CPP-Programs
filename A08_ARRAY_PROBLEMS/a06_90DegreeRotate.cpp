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

    for(int j=n-1;j>=0;j--){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}    