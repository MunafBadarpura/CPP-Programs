#include<iostream>
#include<string>
using namespace std;
int main(){
    int n = 6;
    string arr[] = {"munaf" , "raghav" , "hasan" , "afnan" ,"nadim" , "nazim"};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort
    for(int i=0;i<n-1;i++){
        // bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                // flag = false;
            }
            // if(flag == true) break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}