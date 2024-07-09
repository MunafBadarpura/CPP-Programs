#include<iostream>
using namespace std;
void subString(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    subString(ans+ch,original.substr(1));
    subString(ans,original.substr(1));

}
int main(){
    string str = "abc";
    subString("",str);
}