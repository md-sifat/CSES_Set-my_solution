#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n; cin>>n;
    while (1)
    {
        cout<<n<<" ";
        if(n==1) break;
        if(n&1){
            n=(n*3)+1;
        }
        else{
            n=n>>1;
        } 
    }
    
}
