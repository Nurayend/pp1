/*2
ABCXYZ
CDEZAB*/
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int d;
    cin >> d;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        s[i] = char((s[i] - 'A' + d) % 26 + 'A');
    }
    cout << s;
}