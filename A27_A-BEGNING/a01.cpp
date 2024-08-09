#include<iostream>
using namespace std;
int main(){
    int n = 6;
    char arr[n] = {'2','5', '1', 'C', 'D', '+'};
    int ans[n] = {0};
    int idx = 0;

    for(int i=0;i<n;i++){
        switch(arr[i]){
            case 'D':
                if(i > 0){
                    ans[idx] = ans[idx-1]*2;
                    idx++;
                }
                break;
            case 'C':
                ans[idx] = 0;
                idx--;
                break;
            case '+':
                if(idx>1){
                    ans[idx] = ans[idx-1] + ans[idx-2];
                    idx++;
                }
                break;
            default:
                ans[idx] = arr[i] - '0';
                idx++;
        }
        // if(arr[i] >= '0' && arr[i] <= '9'){
            
        // }
        // else if(arr[i] == 'D'){
            
        // }
        // else if(arr[i] == 'C'){
            
        // }
        // else if(arr[i] == '+'){
            
        // }
    }


    for(int i=0;i<idx;i++){
        cout<<ans[i]<<" ";
    }
}