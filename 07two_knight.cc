#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n; cin>>n;
    ll m=n*n;
    ll r=1;

    for (int i = n; i > 0; i--)
    {
        m--;
        m*=m;
        r*=i;
        cout<<m/r<<endl;
    }
    
}