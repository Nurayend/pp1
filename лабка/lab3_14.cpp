#include <iostream>
using namespace std;
 int main(){
    int n,m,x;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];}
    cin>>m;
    int b[m];
    for (int i=0;i<m;i++){
        cin>>b[i];}
    x =n+m;
    int c[x];
    for (int i=0;i<n;i++){
        c[i]=a[i];}
    for (int i=n; i<x; i++){
        c[i]=b[i-n];}
    for (int i=0;i<x;i++){
    for (int j=0;j<x-1;j++){
      if (c[j]>c[j+1]){
        int k=c[j];
        c[j]=c[j+1];
        c[j+1]=k;}
    }
    }
    for (int i=0; i<x; i++){
        cout << c[i] << " ";}
    return 0;
}
// merge two arrays, sort