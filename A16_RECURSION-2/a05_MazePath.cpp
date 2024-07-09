#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;

    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec); 
    return rightWays + downWays;
}

void pathNames(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }

    pathNames(sr,sc+1,er,ec,s+'R'); //right
    pathNames(sr+1,sc,er,ec,s+'D'); //down
}
int main(){
    // cout<<maze(0,0,2,2);
    pathNames(0,0,2,2,"");
}