#include <iostream>
using namespace std;
int main (){
    int n,max;
    cin>>n;
    for (int i=1;i<=n;i++){
        int x;
        cin>>x;
        if (x>max){
        max=x;
    }
    }
    cout<< max;
    return 0;
}