#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int sum=0,maxi=0,p;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
        maxi=a[i];
        }
    }
    for(int i=0;i<n;i++){
            sum+=a[i];
        }
    p=sum-maxi;
    if(maxi<p){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}