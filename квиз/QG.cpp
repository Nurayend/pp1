#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n, m;
  cin >> n;
  m = n;
  int a[n][m];
  int Sup = 0;
  int Sleft = 0;
  int Sright = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
      if(a[i][j] != 0) Sup++;
    }
  }
  for(int i =0 ; i < n; ++i){
    int mx = 0;
    for(int j =0 ; j < m; j++) mx = max(mx, a[i][j]);
    Sleft+=mx;
  }
  for(int j =0 ; j< m; ++j){
    int mx = 0;
    for(int i =0 ; i < n; i++) mx = max(mx, a[i][j]);
    Sright+=mx;
  }
  cout << Sup + Sleft + Sright;
 }