#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Number of Rows :";
    cin>>n;
    cout<<"Enter Number of Columns :";
    cin>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int max = arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }

    cout<<"Largest Number is :"<<max;

}