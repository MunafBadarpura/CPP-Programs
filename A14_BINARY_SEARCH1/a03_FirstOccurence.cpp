//First Occurance -->
#include<iostream>
using namespace std;
int main(){
    int target = 3;
    int n = 12;
    int arr[] = {1,2,2,3,3,3,3,4,4,5};

    int lo = 0;
    int hi = n-1;
    bool flag = true;
    while(lo<=hi){
        int mid = lo + ((hi-lo) / 2); 
        if(arr[mid] == target){
            if(mid == 0){
                cout<<mid;
                flag=false;
                break;
            }
            else if(arr[mid-1] != target){
                cout<<mid;
                flag=false;
                break;
            }
            else{
                hi = mid - 1;
            }
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }

    if(flag == true) cout<<"Not Present";

    
    
}



//Last Occurence --->
// #include<iostream>
// using namespace std;
// int main(){
//     int target = 3;
//     int n = 10;
//     int arr[] = {1,2,2,3,3,3,3,4,4,5};

//     int lo = 0;
//     int hi = n-1;
//     bool flag = true;
//     while(lo<=hi){
//         int mid = lo + ((hi-lo) / 2); 
//         if(arr[mid] == target){
//             if(mid == 0){
//                 cout<<mid;
//                 flag=false;
//                 break;
//             }
//             else if(arr[mid+1] != target){
//                 cout<<mid;
//                 flag=false;
//                 break;
//             }
//             else{
//                 lo = mid + 1;
//             }
//         }
//         else if(arr[mid]<target) lo=mid+1;
//         else hi=mid-1;
//     }

//        if(flag == true) cout<<"Not Present";
    
// }