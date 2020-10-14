#include <iostream>
using namespace std;
int summa(int a,int b){
    if (b>0)
       return summa(a+1,b-1);
    else
        return a;
}
int main(){
    int a,b;
    cin >> a>>b;
    cout << summa(a,b);
    return 0;
}
 
