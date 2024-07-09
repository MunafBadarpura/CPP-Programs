#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[] = {5,1,5,5,2,3};

//  insertion sorting
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    //Storing into integer
    int a = 0;
    for(int i=0;i<n;i++){
        a*=10;
        a+=arr[i];
    }

    //Seconf Minimume
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        } 
    }
    //Making Integer
    int x = 0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    
    cout<<"Minimume Sum Is : "<<a+x;


}