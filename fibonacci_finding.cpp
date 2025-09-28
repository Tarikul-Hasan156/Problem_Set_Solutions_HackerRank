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
const ll mod=1e9+7;
const ll N=101;
using namespace std;
vector<vector<ll>>arr(N,vector<ll>(N)),res(N,vector<ll>(N));
void mul (vector<vector<ll>>&A,vector<vector<ll>>&B)
{
    vector<vector<ll>>temp(3,vector<ll>(3,0));
    for (int i=1;i<3;i++)
    {
        for (int j=1;j<3;j++)
        {
            for (int k=1;k<3;k++)
            {
                temp[i][j]=(temp[i][j]+((A[i][k]*B[k][j])%mod))%mod;
            }
        }
    }
    A=temp;
}
void solve ()
{
    ll a,b,power;cin>>a>>b>>power;
    power-=1;
    arr[1][1]=0;
    arr[1][2]=1;
    arr[2][1]=1;
    arr[2][2]=1;
    for (int i=1;i<3;i++)
    {
        for (int j=1;j<3;j++)
        {
            if (i==j)res[i][j]=1;
            else res[i][j]=0;
         }
    }
    while (power)
    {
        if (power&1)
        {
            mul(res,arr);
            power--;
        }else 
        {
            mul(arr,arr);
            power/=2;
        }
    }
    cout<<((res[1][2]*a)+(res[2][2]*b))%mod<<endl;
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