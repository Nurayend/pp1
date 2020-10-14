#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin>>n;
    if (n==sqrt(n)*sqrt(n)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}