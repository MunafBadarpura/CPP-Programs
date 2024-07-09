#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    int arr[] {-4,8,7,-6,5,0,1,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   int max = 0;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<3;j++){
           sum +=arr[j];

        if(max<sum) max = sum;
   }

   cout<<sum;
}