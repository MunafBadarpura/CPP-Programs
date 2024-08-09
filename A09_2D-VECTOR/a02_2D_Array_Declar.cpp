#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v1(3,3);
    // cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2];

    vector <vector<int> > v(3,vector<int> (4));  //3-Rows , 4-Columns
    vector <vector<int> > v2(3,vector<int> (4,2));  //3-Rows , 4-Columns ,all elements are 2
    
    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
    cout<<v2[0][0];
}