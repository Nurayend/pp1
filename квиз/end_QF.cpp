#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int i=1;i<=a;i++){
        if(a%i==0)
        v1.push_back(i);
    }
    for(int i=1;i<=b;i++){
        if(b%i==0)
        v2.push_back(i);
    }
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                v3.push_back(v1[i]);
            }
        }
    }
    reverse(v3.begin(),v3.end());
    cout<<v3[k-1];
}