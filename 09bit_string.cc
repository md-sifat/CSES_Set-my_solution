#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(){
    int n; cin>>n;
    int ans = 2;
    for (int i = 1; i < n; i++){
        ans=(ans*2)%mod;
    }
    cout<<ans<<endl;
}