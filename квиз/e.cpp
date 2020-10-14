#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
        s+=char(i+'0');
    }
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        rotate(s.begin(),s.begin()+1,s.end());
        cout<<s<<" ";
        cout<<endl;
    }
    return 0;
}