#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] {7,1,2,9,9,9,9,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxSum = INT_MIN;
    int prevSum = 0;

    //Previuce Sum
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    maxSum = prevSum;
    
    //Sliding Window
    int i=1;
    int j=k;
    while(j<n){
        int currSum = prevSum + arr[j] - (arr[i-1]);
        if(maxSum<currSum){
            maxSum = currSum;
        }
        prevSum = currSum;
        i++;
        j++;
    }

    cout<<maxSum;
}