#include <iostream>
using namespace std;
int T(int n){
    if(n==0)
    return 0;
    if(n==1 || n==2)
    return 1;
    //T(n+3)=T(n)+T(n+1)+T(n+2);
    return T(n-1)+T(n-2)+T(n-3);
}
int main(){
    int n;
    cin>>n;
    cout<<T(n);
    return 0;
}