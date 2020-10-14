#include <iostream>
#include <cmath>
 
using namespace std;
 
int n;
int a[100002];
 
int closest(int c) {
    int l = 0, r = n - 1;
    for (int i = 0; i < 100; ++i) {
        int mid = (r + l) / 2;
        if (a[mid] > c)
            r = mid;
        else
            l = mid;
    }
    if (l != r)
        return (abs(a[r] - c) < abs(a[l] - c) ? r : l);
    return l;
}
 
int main() {
    int k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for (int i = 0, c; i < k; ++i){
        scanf("%d", &c), printf("%d ", a[closest(c)]);
        cout<<endl;
    }
    return 0;
}