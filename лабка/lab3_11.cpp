#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt[26];
    
    // a = 97
    // b == 98
    // z = 122
    
    // a -> 0
    // b -> 1
    
    // a - 97 = 0
    // b - 97 = 1
    
    for(int i= 0; i < 26; i++) cnt[i] = 0;
    for(int i = 0; i < n; i++){
        cnt[(int)a[i] - 'a']++;
    }
    for(int i = 0; i < 26;i++){
        if (cnt[i]!=0)
            cout << (char)(97 + i) << " " << cnt[i] << endl;
    }
}
//72901. How many times?