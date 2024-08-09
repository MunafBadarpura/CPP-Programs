#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Number of Rows : ";
    cin>>m;
    cout<<"Enter Number of Columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    int minr = 0,    minc = 0;
    int maxr = m-1 , maxc=n-1;
    
    while(minr<=maxr && minc<=maxc){
        //RIGHT
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //DOWN
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //LEFT
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //UP
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}  

