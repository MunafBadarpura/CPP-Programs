#include<iostream>
#include <limits.h>
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

    int max = INT_MIN;
    int row = 0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum +=arr[i][j];
        }
        if(max<sum){
            max = sum;
            row = i;
        }
    }

    cout<<"Maximume Row Is : "<<row+1<<" , And Sum Of This Row Is : "<<max;
}