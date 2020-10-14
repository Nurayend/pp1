#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    while(cin >> x){
        if(x < 0) break;
        v.push_back(x);
    }
    int cnt = 0;
    for(int i = 0; i < v.size(); i++) if(v[i] % 2 == 0) cnt++;
    cout << ((double)cnt / (double)v.size())*100 << "% " << ((double)(v.size() - cnt) / (double)v.size())*100<<"%";
}