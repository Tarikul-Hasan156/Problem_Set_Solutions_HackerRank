//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    vector<ll>store(32);
    ll j=31;
    unsigned int x;cin>>x;
    for (int i=0;i<32;i++){
        store[j--]=((x>>i)&1);
    }
    // for (auto &x:store)cout<<x<<sp;cout<<endl;
    // cout<<store.size()<<endl;
    unsigned long long ans=0;
    for ( int i=0;i<32;i++){
        if (store[i]){ans+=(1u<<i);}
    }
    cout<<ans<<endl;
}
int main ()
{
    speed;
    int tt;
    cin>>tt;
    while (tt--)
    {
        solve ();
    }
    return 0;
}