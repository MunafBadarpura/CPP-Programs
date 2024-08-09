#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Number of Columns/Rows :";
    cin>>m;
    cout<<"Enter Matrix :"<<endl;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int brr[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           brr[j][i] = arr[m-1-i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" "; 
        }
        cout<<endl;
    }
    
}