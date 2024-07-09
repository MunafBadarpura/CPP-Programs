#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v1){
    int i=0;
    int j=v1.size()-1;
    while(i<j){
        if(v1[i]<0) i++;
        if(v1[j]>0) j--;
        else if(v1[i]>0 && v1[j]<0 ){
            int temp = v1[i];
            v1[i] = v1[j];
            v1[j] = temp;
            i++;
            j--;
        } 
    }
}
int main(){
  
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(-4);
    v1.push_back(1);
    v1.push_back(-8);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(-9);

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"  ";
    }
    cout<<endl;
    sort(v1);

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<"  ";
    }
    
}