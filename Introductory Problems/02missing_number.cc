#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }

    int ar2[n+1];
    for (int i = 0; i <=n; i++)
    {
        ar2[i]=0;
    }
    ar2[0]=1;
    for (int i = 0; i < n-1; i++)
    {
        ar2[arr[i]]=1;
    }
    for (int i = 0; i <=n; i++)
    {
        if(ar2[i]==0){
            cout<<i<<endl;
        }
    }
    
    
    
}
