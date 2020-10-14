#include <iostream>
using namespace std;
int main (){
    int n, cnt=0;
    int temp;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>temp;
        while (temp>0){
            if (temp%10==0){
                cnt++; temp/=10;} 
                else temp/=10;
        }
        cout<<cnt;
    }
    return 0;
}