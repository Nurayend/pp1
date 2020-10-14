#include <iostream>
using namespace std;
void isAnagram(string s, string t){
    for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < s.size()-1; j++) 
      if (s[j] > s[j + 1]) 
        swap (s[j],s[j + 1]); 
    }
    for (int i = 0; i < t.size(); i++) {
    for (int j = 0; j < t.size()-1; j++) 
      if (t[j] > t[j + 1]) 
        swap (t[j],t[j + 1]); 
    }
    if(s==t)
    cout<<"Yes";
    else cout<<"No";
}
int main(){
    string s,t;
    cin>>s>>t;
    isAnagram(s,t);
    return 0;
}