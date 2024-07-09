#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row;
    cout<<"enter Row : ";
    cin>>row;
    vector<vector<int>>v;
    for(int i=0;i<row;i++){
        vector<int> a(i+1);
        v.push_back(a);
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            if(i==0 || i==j || j==0){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
