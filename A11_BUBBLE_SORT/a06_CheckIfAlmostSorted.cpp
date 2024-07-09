#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {4,2,7,8,9};
    int brr[n];
    for(int i=0;i<n;i++){ //4,2,7,9,8
        brr[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //sorting
    for(int i=0;i<n-1;i++){
        //travers
        bool flag = true; //sorted
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<endl;
    for(int i=0;i<n;i++){//2,4,7,8,9
        cout<<arr[i]<<" ";
    }

    //Check'
    bool flag = true;
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]!=brr[i] && arr[i]!=brr[i+1]){
                flag=false;
                break;
            }
        }
        else if(i==n-1){
            if(arr[i]!=brr[i] && arr[i]!=brr[i-1]){
                flag=false;
                break;
            }
        }
        else{
            if(arr[i]!=brr[i] && arr[i]!=brr[i-1] && arr[i]!=brr[i+1]){
                flag=false;
                break;
            }
        }
    }

    cout<<endl;
    if(flag==true) cout<<"Almost Sorted";
    else cout<<"Not Almost Sorted";
}