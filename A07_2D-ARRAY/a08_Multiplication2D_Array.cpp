#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"Enter Number of Rows For Matrix 1:";
    cin>>m;
    cout<<"Enter Number of Columns For Matrix 1:";
    cin>>n;
    cout<<"Enter Matrix 1 :"<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter Number of Rows For Matrix 2:";
    cin>>p;
    cout<<"Enter Number of Columns For Matrix 2:";
    cin>>q;

    cout<<"Enter Matrix 2 :"<<endl;
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }

    if(n==p){ //matrix1 column = matrix2 row
        //Resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                //Multiplication
                res[i][j] = 0;
                for(int k=0;k<n;k++){
                    res[i][j] += arr[i][k] * brr[k][j];
                }

            }
        }
        cout<<endl<<"Multiplication : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The Matrices Cannot Be Multiplied";
    }
}