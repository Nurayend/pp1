#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        for(int i=a+1;i<b;i++){
            if(((i % 4) == 0) && (((i % 100) != 0) || ((i % 400) == 0)))
                cout<<i<<" ";
        }
    }
    if(a>b){
        for(int i=b+1;i<a;i++){
            if(((i % 4) == 0) && (((i % 100) != 0) || ((i % 400) == 0)))
                cout<<i<<" ";
        }
    }
    return 0;
}