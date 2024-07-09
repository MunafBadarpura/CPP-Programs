#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Number of Rows :";
    cin>>n;
    cout<<"Enter Number of Columns :";
    cin>>m;
    cout<<"Enter Matrix :"<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int trans[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trans[i][j] = arr[j][i];
        }
    }

    cout<<endl<<"Transpose :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    

}