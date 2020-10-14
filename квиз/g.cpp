#include <iostream>
#include <map>
using namespace std;
map<string,int> m;
int main(){
    string s;
    for(int i=0;i<s.size();i++){
        cin>>s;
        m[s]++;
    }
    for(map<string,int> :: iterator it=m.begin();it!=m.end();it++){
        if(it->second%2==0){
            cout<<it->first<<endl;
        }
    }
    return 0;
}