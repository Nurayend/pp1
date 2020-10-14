#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<char, int> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        set<char> st;
        for(int j = 0; j < s.size(); j++) st.insert(s[j]);
        for(set<char>::iterator it = st.begin(); it != st.end(); it++){
            m[(*it)]++;
        }
    }
    for(map<char, int> :: iterator it = m.begin(); it != m.end(); it++){
        if((*it).second == n) cout << (*it).first << " ";
    }
}