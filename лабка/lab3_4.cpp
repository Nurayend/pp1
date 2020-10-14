#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    int maxi=a[0];
    int ind_maxi=0;
    for (int i=0;i<n;i++){
cin>>a[i];
        if(maxi<a[i])
            maxi= a[i];
            ind_maxi=i;   
    }cout<<ind_maxi;
    return 0;
}
//72569. Position of maximum