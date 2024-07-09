#include<iostream>
#include<vector>
using namespace std;
void zeroone(vector<int> &v1){
    //FIRST METHOD-->
    // int num0 = 0;
    // int num1 = 0;

    // for(int i=0;i<v1.size();i++){
    //     if(v1[i]==0) num0++;
    //     else num1++;
    // }

    // for(int i=0;i<v1.size();i++){
    //     if(i<num0) v1[i]=0;
    //     else v1[i] = 1;
    // }

    //SECOND METHOD-->
    int i=0;
    int j=v1.size()-1;
    while(i<j){
        if(v1[i]==0) i++;
        if(v1[j]==1) j--;
        else if(v1[i]==1 && v1[j]==0 ){
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
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    zeroone(v1);

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    
}