#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    
    ll n,temp=0; cin>>n; temp=n;
    ll sum = (n*(n+1))/2;
    if(sum&1){
        cout<<"NO"<<endl;
        return 0;
    }
    ll a=n/2,b=a;
    if(n&1) b++;
    cout<<"YES"<<endl;
    cout<<a<<endl;
    while (temp>0)
    {    
        cout<<temp<<" ";  temp-=3;
        if(temp==0){break;}     
        cout<<temp<<" "; temp--;
    }
    temp=n-1;
    cout<<endl<<b<<endl;
    while (temp>0)
    {
        cout<<temp<<" "; temp--;
        if(temp==0){break;}
        cout<<temp<<" "; temp-=3;
    }
    
    
   
    

}