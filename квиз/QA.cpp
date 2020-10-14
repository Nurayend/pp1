//Pal
#include <iostream>
using namespace std;
bool isPalin=true{
    int n=s.size();
    for (int i=0;i<n/2;i++){
        if (s[i]!=s[n-i-1])
            isPalin=false;
    }
}
int main(){
    string s;
    cin>>s;
    
    if(isPalin==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}