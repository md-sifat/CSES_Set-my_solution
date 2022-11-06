#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define si string
#define umap unordered_map
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool isfind( vector<int> &vec , int k , int d ){
    int s=0 , e = vec.size()-1;
    int mid = s+ (e-s)/2;
    while (s<=e)
    {
        if(vec[mid]<(k+d) && vec[mid]> (k-d) && vec[mid]!=0){
            vec[mid]=0;
            return true;
        }else if(vec[mid]<k){
            s=mid;
        }else{
            e=mid-1;
        }
        mid = s+ (e-s)/2;
    }
    return false;
}
    

 
void sol(){
    int n,m,k; cin>>n>>m>>k;
    vector<int> vec(n), vec1(m);
    for(auto &it:vec) cin>>it;
    for(auto &it:vec1) cin>>it;

    sort(vec.begin(),vec.end());
    int ans=0;
    for (int i = 0; i < m; i++){
        if(isfind(vec , vec1[i] , k)){
            ans++;
        }
    }
    cout<<ans<<endl;

}
int main(){
    fast
    int t; cin>>t;
    while(t--){
        sol();
    }
}