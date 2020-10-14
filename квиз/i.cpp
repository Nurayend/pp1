#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int cnt;
int main(){
    string s;
    cin>>s;
    set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    vector<char> v(st.begin(),st.end());
    do{
        cnt++;
    }
    while(next_permutation(v.begin(),v.end()));
    set<char> :: iterator it;
    for(it=st.begin();it!=st.end();it++){
        cout<<(char)*it;
    }
    cout<<endl;
    cout<<cnt;
    return 0;
}