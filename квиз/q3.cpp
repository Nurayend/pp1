#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]<a[i+1]){
            cnt++;
        }
    }
    if(cnt==n-1){
        cout<<"Interesting";
    }else{
        cout<<"Not interesting";
    }
    return 0;
}