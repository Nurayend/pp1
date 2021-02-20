#include <iostream>
using namespace std;

int summa (int a, int b) {
    if(a<b){
        if (a==b) return a;
        return b + summa(a, b-1);
    }
    else{
        if (b==a) return b;
        return a + summa(b, a-1);
    }
}  
 
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << summa(a, b);
    return 0;
}