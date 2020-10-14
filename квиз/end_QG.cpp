#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, set<int> > m;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        int day;
        cin >> day;
        m[name].insert(day);
    }
    for(map<string, set<int> >::iterator it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " ";
        if((*it).second.size() >= 3) cout << "+1\n";
        else cout << "NO BONUS\n";
    }
}