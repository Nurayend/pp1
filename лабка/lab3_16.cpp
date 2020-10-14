#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i=1;i<=n;i++){
        a[i]=a[i]*a[i];
        cout<<a[i]<<" ";
    }
    return 0;
}
//73261. Square