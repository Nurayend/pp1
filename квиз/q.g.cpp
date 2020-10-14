#include <iostream>
using namespace std;
void f(int a,int b, int x, int y){
    if((a==x && b==y) || (a==y && b==x)){
    cout<<"Thanks, Nurbek";
    return;}
    if (a<=x && b<=y){
    cout<<"Thanks, Nurbek";
    return;}
    if (a<=y && b<=x){
    cout<<"Thanks, Nurbek";
    return;}
    else {cout<<"Impossible";}
    
}
int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    f(a,b,x,y);
    return 0;
}