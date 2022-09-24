#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n; cin>>n;
    int i=5,j=1,ans=0,po=5;
    while (po<=n)
    {
        po= pow(i,j);
        ans+=(n/po);
        j++;
    }
    cout<<ans<<endl;
    
    
    return 0;
}