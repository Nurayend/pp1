#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> st;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
       st.insert(a[i]);
    }
    if(st.size()==n)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}