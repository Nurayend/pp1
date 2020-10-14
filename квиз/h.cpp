#include <iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=char(s[i]-' ');
        }
        else{
            s[i]=char(s[i]+' ');
        }
    }
    cout<<s<<endl;
    }
    return 0;
}