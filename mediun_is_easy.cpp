//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
// #include <string>
// #include <sstream>
// #include<set>
// #include<iomanip>
// #include<cstring>
// #include<cctype> //islower () issuper () for check the first char
// #include<algorithm>
// #include<cmath>
#define sortarray sort(arr,arr+x);
// #define rev reverse(s1.begin(), s1.end());
// #define uppertolowers1 transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
// #define uppertolowers2 transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
// #define descsort sort(arr, arr + n, greater<int>());
#define sp " "
#define forn(i, n) for (int i = 0; i < (n); i++)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define maxelementofvector *max_element(digit.begin(),digit.end());
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
ll sor(vector<ll>vv,ll temp)
{
    // for (auto x:vv)cout<<x<<sp;
    // cout<<endl;
    sort(vv.begin(),vv.begin()+temp);
    // cout<<"After sort"<<endl;
    // for (auto x:vv)cout<<x<<sp;
    // cout<<endl;
    if (temp&1)
    {
        ll me=temp/2;
        return vv[me];
    }else
    {
        ll me=temp/2;
        return min(vv[me-1],vv[me]);
    }
}
void solve ()
{
    ll x;cin>>x;
    vector<ll>vv(x);
    for (auto&x:vv)cin>>x;
    for (int i=0;i<x;i++)
    {
        vv[i]=vv[i]%10;
    }
    // for (auto x:vv)cout<<x<<sp;
    // cout<<endl;
    vector<ll>res;
    res.push_back(vv[0]);
    ll i=2;
    while(i<=x)
    {
        ll temp2=sor(vv,i);
        res.push_back(temp2);
        i++;
    }
    for (auto x:res)cout<<x<<sp;
    cout<<endl;
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