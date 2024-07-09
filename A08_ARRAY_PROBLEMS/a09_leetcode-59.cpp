#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter Number of Columns / Rows: ";
    cin>>n;
    int arr[n][n];
    cout<<endl;
    
    int minr = 0,    minc = 0;
    int maxr = n-1 , maxc=n-1;
    int num = 1;
    while(minr<=maxr && minc<=maxc){
        //RIGHT
        for(int j=minc;j<=maxc;j++){
            arr[minr][j] = num;
            num++;
        }
        minr++;
        
        if(minr>maxr || minc>maxc) break;
        //DOWN
        for(int i=minr;i<=maxr;i++){
            arr[i][maxc] = num;
            num++;
        }
        maxc--;
        
        if(minr>maxr || minc>maxc) break;
        //LEFT
        for(int j=maxc;j>=minc;j--){
            arr[maxr][j] = num;
            num++;
        }
        maxr--;
        
        if(minr>maxr || minc>maxc) break;
        //UP
        for(int i=maxr;i>=minr;i--){
            arr[i][minc] = num;
            num++;
        }
        minc++;
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}  

