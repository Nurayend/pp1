#include <iostream>
using namespace std;

int f(int n){
    int summa = 0;
    while (n>0){
        summa += n%10;
        n /= 10;
    }
    return summa;
}

int main(){
    int a, b;
    cin>>a>>b;
    int mini=10001;
    for (int i=a; i<=b; i++){
        if (f(i)<mini){
            mini = i;
        }
    }
    cout<<mini;
    return 0;
}