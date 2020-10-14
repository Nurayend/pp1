#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n,r,q;
    cin>>n;
    string s,t;
    map<string,string>m;
    for(int i=0;i<n;i++){
        cin>>s>>r;
        for(int i=0;i<r;i++){
            cin>>t;
            m.insert(make_pair(t,s));
        }
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>s;
        if(m.find(s)!=m.end())
        cout<<m[s]<<endl;
        else cout<<"Unknown\n";
    }
    return 0;
}