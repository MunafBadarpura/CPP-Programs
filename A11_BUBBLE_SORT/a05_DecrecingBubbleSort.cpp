#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Sort In Decrising
    for(int i=0;i<n-1;i++){
        //Traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}