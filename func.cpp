#include <iostream>

using namespace std;


double sum(double x, double y){
    return x+y;
}

void swap(int &a, int &b){
    int tmp = b;
    b = a;
    a = tmp;
}

int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fin(n-2);
}

int main(){
    int a = 1;
    int b = 2;
    
    swap(a, b);
    cout << a << b;
    return 0;
}

void sum(int x, int y){
    cout << "The sum of " << x << " and " << y << ": " << endl;
    cout << x + y << endl;
}
