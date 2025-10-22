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
    unsigned long long ans=0;
    for (int i=0;i<64;i+=2){
        ll a=(x>>i)&1;
        ll b=(x>>(i+1))&1;
        swap(a,b);
        if (a){
            ans+=(1<<i);
        }
        if (b){
            ans+=(1<<(i+1));
        }
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