#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int cntr = 1 , max = 0;
    int size = name.size();
    for (int i = 0; i < size; i++)
    {
        if (name[i]==name[i+1]){
            cntr++;
        }
        else{
            if(cntr>max){
                max=cntr;
            }
            cntr=1;
        }
    }
    cout<<max<<endl;
    
}