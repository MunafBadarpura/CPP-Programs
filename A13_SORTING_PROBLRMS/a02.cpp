#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {-15,8,-7,0,92,108};

    //Insertion Sort
    for(int i=1;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}