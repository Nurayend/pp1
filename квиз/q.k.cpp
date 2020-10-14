//- k
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==1) 
                if (j%2==1) cout<<1;
                else cout<<0;
            else 
                if (j%2==1) cout<<0;
                else cout<<1;
        }cout<<endl;
    }
    return 0;
}