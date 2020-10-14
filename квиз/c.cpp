#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    sort(a,a+n+m,cmp);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
    }
}