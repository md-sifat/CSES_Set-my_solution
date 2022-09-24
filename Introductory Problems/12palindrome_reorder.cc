#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string name; cin>>name;
    sort(name.begin(),name.end());
   int n=name.size();
    string ans;
    for (int i = 0; i < name.size(); i++){
        if(i&1){
        ans.push_back(name[n-1]);
        }else{
        ans.push_back(name[i]);
        }
        
    }
    cout<<ans<<endl;
   
    
    
    
}