#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int max=-33333;
    for (int i=1;i<=n;i++){
        int x;
        cin>>x;
        if (x>max)
        max=x;
    }cout<<max;
    return 0;
}
//72568. Maxmimum in array
