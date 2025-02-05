#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(pivotElement>=arr[i]) count++;
    }
    int pivotIndex = count + si;

    swap(arr[(si+ei)/2],arr[pivotIndex]);

    int i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        } 
    }

    return pivotIndex;
}
int kThSmallest(int arr[],int si,int ei,int k){
    int pi = partition(arr,si,ei);

    if(pi+1==k) return arr[pi];
    else if(pi+1 < k) kThSmallest(arr,pi+1,ei,k);
    else kThSmallest(arr,si,pi-1,k);
}
int main(){
    int arr[] = {5,1,8,2,18,6,3,8,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    cout<<kThSmallest(arr,0,n-1,k);
}