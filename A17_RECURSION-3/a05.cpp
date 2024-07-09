#include<iostream>
using namespace std;
void subString(string ans,string original, bool flag){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true) subString(ans+ch,original.substr(1),true);
        subString(ans,original.substr(1),true);
        return;
    }
    char dh = original[1];
    if(ch==dh){
        if(flag==true) subString(ans+ch,original.substr(1),true);
        subString(ans,original.substr(1),false);
    }
    else{
        if(flag==true) subString(ans+ch,original.substr(1),true);
        subString(ans,original.substr(1),true);
    }

}
int main(){
    string str = "aab";
    subString("",str,true);
}