#include <iostream>
using namespace std;
int main(){

    /*1 2 3
    8 9 4
    7 6 5

    7 8 9
    6 1 2
    5 4 3*/
    int n;
    cin >> n;
    int a[n][n];
    int cnt = 1;

    for(int layer = 0; layer < n / 2 + n % 2; layer++){
        int i,j;
        i = j = layer;
        while(j <= n - 1 - layer){
            a[i][j] = cnt;
            cnt++;
            j++;
        }
        j--;
        i++;
        while(i <= n - 1 - layer){
            a[i][j] = cnt;
            cnt++;
            i++;
        }
        i--;
        j--;
        while(j >= layer){
            a[i][j] = cnt;
            cnt++;
            j--;
        }
        i--;
        j++;
        while(i > layer){
            a[i][j] = cnt;
            cnt++;
            i--;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }

}
//spiral2