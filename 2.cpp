#include <iostream>
#include <cmath>

using namespace std;
int main () {
    int a, b;
    cin >> a >> b;
    float s;
    s = pow(a,2)-pow(b/2,2);
    printf("%.2f", sqrt(s));
    return 0;
}