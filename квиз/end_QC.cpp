#include <bits/stdc++.h>  
using namespace std;  
bool comp( pair <string,int> a, pair <string,int> b) {       
    return a.second > b.second;   
}       
int main() {       
    int n;  
    cin>>n;  
    double sum=0;  
    map<string,double> m;     
    map<string,double> ::iterator it;  
    for(int i=0;i<n;i++){  
        string s;  
        double k;  
        cin>>s>>k;  
        m[s]+=k;  
        sum+=k;  
    }  
    for(it=m.begin();it!=m.end();it++){  
        (*it).second=((*it).second/sum)*100;  
    }      
    vector<pair<string,double> > vec(m.begin(),m.end());   
  
    sort(vec.begin(), vec.end(), comp);            
    cout<<endl;  
    for (int i=0;i<vec.size();i++)   
        cout << vec[i].first << ' ' << vec[i].second <<"%"<<endl;   
}