#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    int n; cin>>n;
    vector<ll> vec(n);
    for(auto & i:vec) cin>>i;
    sort(vec.begin(),vec.end());
    ll ans=1;
    for (ll i = 1; i < n; i++)
    {
        if(vec[i]!=vec[i-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
    
    

}