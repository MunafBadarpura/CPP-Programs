#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=5;
    int arr[] = {2,3,1,5,4};
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    //SELECTION SORT
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindex = -1;
        //Minimume ELement And Minumume Index
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                mindex = j;
            }
                
        }
        swap(arr[i],arr[mindex]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
    
}