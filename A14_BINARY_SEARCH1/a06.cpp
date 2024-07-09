#include<iostream>
using namespace std;
int main(){
    int arr[5][6] = {{0,0,1,1,1,1},{0,1,1,1,1,1},{0,0,0,1,1,1},{0,0,0,0,0,1},{0,0,1,1,1,1}};
    int m = 5; //rows
    int n = 6; //columns
    int ans = -1;
    int row = -1;
    int a;

    for(int i=0;i<m;i++){
         a = 0;
        int lo = 0;
        int hi = n-1;
        while(hi>=lo){
            int mid = lo +(hi-lo)/2;
            if(arr[i][mid] == 1){
                if(arr[i][mid-1] != 1){
                    a = n - mid; 
                    break;
                }
                else hi = mid - 1;
            }
            else lo = mid + 1;
        }
        if(ans<a){
            ans = a;
            row = i+1;
        } 

    }
    cout<<"Row = "<<row<<","<<"No Of Ones = "<<a;
    

}