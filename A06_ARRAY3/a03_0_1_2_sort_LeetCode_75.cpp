#include<iostream>
#include<vector>
using namespace std;
void zeroone(vector<int> &nums){
    //TWO PASS ALGORITHEM -->
    // int num0 = 0;
    //     int num1 = 0;
    //     int num2 = 0;

    // for(int i = 0 ;i<nums.size();i++){
    //     if(nums[i]==0) num0++;
    //     else if(nums[i]==1) num1++;
    //     else num2++;
    // }

    

    // for(int i=0;i<nums.size();i++){
    //   if(i<num0) nums[i]=0;
    //   else if(i<(num0+num1)) nums[i]=1;
    //   else nums[i]=2;
    // }

    //ONE PASS ALGORITHEM -->
    int lo = 0;
    int mid=0;
    int hi = nums.size()-1;

    while(mid<=hi){
        if(nums[mid]==2){
            int temp = nums[mid];
            nums[mid] =nums[hi];
            nums[hi] = temp;
            hi--;
        }
        else if(nums[mid]==0){
            int temp = nums[mid];
            nums[mid] = nums[lo];
            nums[lo] = temp;
            mid++;
            lo++;
        }
        if(nums[mid]==1){         // else{
            mid++;                //     mid--;
                                  //     } 
        }
        
    }
}   
int main(){
  
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(1);
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