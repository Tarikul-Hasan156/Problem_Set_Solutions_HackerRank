//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
vector<ll>vv(10,1);
void solve ()
{
    vv[0]=1;
    for (int i=1;i<10;i++){
        vv[i]=i*vv[i-1];
    }
    // for (int i=0;i<10;i++){
    //     cout<<i<<sp<<vv[i]<<endl;
    // }
    ll x; cin>>x;
    ll sum=0;
    for (int i=10;i<=x;i++){
        string s=to_string(i);
        ll temp_sum=0;
        for (int j=0;j<s.size();j++){
            temp_sum+=vv[s[j]-'0'];
        }
        // cout<<s<<":"<<sp<<temp_sum<<endl;
        if (temp_sum%i==0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
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