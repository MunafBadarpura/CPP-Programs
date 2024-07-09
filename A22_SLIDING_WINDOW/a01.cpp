#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] {7,1,2,5,8,1,9,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int max = INT_MIN;
    int sum;

        for(int i=0;i<=n-k;i++){
            sum = 0;
            for(int j=i;j<i+k;j++){
            sum +=arr[j];
            }
            if(max<sum) max = sum;
        }

            cout<<max;
}