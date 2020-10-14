#include <iostream>
#include <set>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    double ans=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i+=2){
        if(a[i]%2==0){
            ans+=a[i];
            cnt++;
        }
    }
    if(ans==0){
        cout<<0;
        return 0;
    }
    ans=(double(ans)/cnt);
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}