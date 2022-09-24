#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll r, c;
        cin >> r >> c;
        ll trg = max(r, c), itr = min(r, c);
        if (r <= c){
            if (!(trg & 1)){
                cout << (trg - 2) * (trg - 1) + trg + (itr - 1) << endl;
                continue;
            }
            cout << (trg - 1) * trg + trg - (itr - 1) << endl;
        }
        else{
            if (!(trg & 1)){
                cout << (trg - 1) * trg + trg - (itr - 1) << endl;
                continue;
            }
            cout <<(trg - 2) * (trg - 1) + trg + (itr - 1) << endl;
        }
    }
    return 0;
}