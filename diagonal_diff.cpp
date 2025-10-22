//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    ll x;cin>>x;
    ll first=0,second=0;
    vector<vector<ll>>vv(x+1,vector<ll>(x+1));
    for (int i=1;i<=x;i++){
        for (int j=1;j<=x;j++){
            cin>>vv[i][j];
            if (i==j)first+=vv[i][j];
        }
    }
    for ( int i=1;i<=x;i++){
        for (int j=x,k=1;j>=1;j--,k++){
            if (i==k)second+=vv[i][j];
        }
    }
    cout<<abs(first-second)<<endl;
}
int main ()
{
    speed;
    // int tt;
    // cin>>tt;
    // while (tt--)
    // {
        solve ();
    // }
    return 0;
}