#include<iostream>
using namespace std;
int main(){
    int arr[] {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = 0;
    int sum;

        for(int i=0;i<=n-3;i++){
            sum = 0;
            for(int j=i;j<i+3;j++){
            sum +=arr[j];
            }
            if(max<sum) max = sum;
        }

            cout<<max;
}