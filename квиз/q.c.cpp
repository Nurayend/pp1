#include <iostream>
using namespace std;
int summa(int n){
    if(n==0) return 0;
    return n%10+summa(n/10);
}
int main(){
    int n;
    cin>>n;
    if(summa(n)%(n%10)==0)
    cout<<"Yes";
    else cout<<"No";
    return 0;
}