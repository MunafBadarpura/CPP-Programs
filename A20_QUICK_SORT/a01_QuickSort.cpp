#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement = arr[(si+ei)/2];
    //Finding Pivot Element Actual Idx
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIndex = count + si;  //PivotIdx
    //Swapping PivotElement With Their Idx;
    swap(arr[(si+ei)/2],arr[pivotIndex]);

    int i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i++],arr[j--]);
            // i++;
            // j--;
        }
    }

    return pivotIndex;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei) return;
    //Finding Pivot Index
    int pi = partition(arr,si,ei);

    //Recursion
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4,-8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    quickSort(arr,0,n-1);
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}