#include<iostream>
#include<vector>
using namespace std;
vector<int> mergesort(vector<int> &v1,vector<int> &v2){

    vector<int> v3(v1.size()+v2.size());
    int i=0;
    int j=0;
    int k=0;

    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            v3[k] = v1[i];
            i++;
            k++;
        }
        else{
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
    if(i==v1.size()){
        while(j<v2.size()){
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    if(j==v2.size()){
        while(i<v1.size()){
            v3[k] = v1[i];
            k++;
            i++;
        }
    }

    return v3;
}
int main(){
  
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(7);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(9);
    v2.push_back(11);
    v2.push_back(13);

    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    cout<<endl;

    vector<int> v3 = mergesort(v1,v2);

    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    
}