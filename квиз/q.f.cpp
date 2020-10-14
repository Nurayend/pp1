//-
#include <iostream>
using namespace std;
bool isP(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i])
        return false;
    }
    return true;
}
int main(){
    string s;
    int a;
    cin>>a;
    //s.size=a;
    for(int i=0;i<a;i++){
        cin>>s;
    }
    for(int i=0;i<a;i++){
        if(isP(s))
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}