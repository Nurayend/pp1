#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cin >> x;
    int n = 10;
    int m = 15;
    int c[n];
    int d[m];
    for(int i = 0;i<n;i++){
        cin>>c[n];
    }
    for(int i = 1; i < m; i++){
        cin >> d[m];
    }
    int a = 0;
    int b = 0;
    for(int i = 1; i < n; i++){
        a += c[i];
    }
    for(int i = 1; i < m; i++){
        b += d[i];
    }
    int z = (a * pow(x, 5)) - b;
    cout << z;
    return 0;
}