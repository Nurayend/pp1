#include <iostream>
#include <cmath>

using namespace std;
int main () {
    int a,b;
    cin>>a;
    b=2;
    cout<<a%b*pow(b,3)+(a/2)%b*pow(b,2)+(a/4)%b*pow(b,1)+(a/8)%b*pow(b,0);
    return 0;
}