#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[] = {-2,3,10,-5,40};
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    //INSERTION SORT
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}