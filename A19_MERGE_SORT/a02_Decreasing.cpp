#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &v){
    int i=0;
    int j=0;
    int k=0;

    while(i<a.size() && j<b.size()){
        if(a[i]>=b[j]){
            v[k++] = a[i++];
        }
        else{
            v[k++] = b[j++];
        }
    }

    if(i==a.size()){
        while(j<b.size()){
            v[k++] = b[j++];
        }  
    }

    if(j==b.size()){
        while(i<a.size()){
            v[k++] = a[i++];
        }
    }
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1=n/2, n2=n-n/2;
    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);

    a.clear();
    b.clear();
}
int main(){
    int arr[] = {5,4,0,3,2,7,5,9,8,1};
    int n = sizeof(arr) / sizeof(arr[1]);
    vector<int> v(arr,arr+n);

    mergeSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}