#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0,count2=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if (x%2==0)
        count1++;
    else count2++;
    }cout<<count1<<" "<<count2;
    return 0;
}