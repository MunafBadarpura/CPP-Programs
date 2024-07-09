#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Number of Rows :";
    cin>>n;
    cout<<"Enter Number of Columns :";
    cin>>m;
    cout<<"Enter Matrix 1 :"<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter Matrix 2 :"<<endl;
    int brr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }
    }

    cout<<endl<<"Sum Of Two Matrix :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j] + brr[i][j]<<" ";
        }
        cout<<endl;
    }

}