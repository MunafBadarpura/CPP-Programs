#include<iostream>
using namespace std;
int main(){
//    VALID
    //int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    //int arr[][3] = {1,2,3,4,5,6,7,8,9};
    //int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//    NOT-VALID
    //int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9},{8,6,4}} ;
    //int arr[2][] = {1,2,3,4,5,6,7,8,9};
    //int arr[3][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

//   INPUT-OUTPUT
     int arr[3][3]={1,2,3,1,2,3,1,2,3};

     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

}