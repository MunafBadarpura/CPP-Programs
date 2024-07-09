#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;    //int* ptr = &arr <-- it is wrong
    cout<<ptr<<endl;

    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    // CHANGIN VALUE
    // *ptr = 10;
    // ptr++;
    // *ptr=20;
    // ptr--;

    // for(int i=0;i<=4;i++){
    //     cout<<arr[i]<<" ";
    // }


}
