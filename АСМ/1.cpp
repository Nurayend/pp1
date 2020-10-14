#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int target;
    cin>>target;
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]>target)
        r=mid-1;
        if(a[mid]<target)
        l=mid+1;
        else cout<<mid;
        break;
    }
    cout<<l;
    return 0;
}