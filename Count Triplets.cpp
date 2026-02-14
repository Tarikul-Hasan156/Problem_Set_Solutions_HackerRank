
    #include <bits/stdc++.h>
    #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll int64_t
    #define sp ' '
    #define endl '\n'
    using namespace std;
    const ll N=1e5+9;

    // struct custom_hash {
    //   static uint64_t splitmix64(uint64_t x) {
    //       x += 0x9e3779b97f4a7c15ULL;
    //       x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
    //       x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
    //       return x ^ (x >> 31);
    //   }
    //
    //   size_t operator()(uint64_t x) const {
    //       static const uint64_t FIXED_RANDOM =
    //           chrono::steady_clock::now().time_since_epoch().count();
    //       return splitmix64(x + FIXED_RANDOM);
    //   }
    // };

    void solve ()
    {
        int n,p;cin>>n>>p;
        vector<ll>a(n+1);
        map<ll,int>mp,temp;
        for (int i=1;i<=n;i++){
            cin>>a[i];
            // if (a[i]%p==0 or a[i]==1){
                temp[a[i]]++;
            // }
        }
        ll ans=0;
        for (int i=1;i<=n;i++){
            temp[a[i]]--;
            if (temp[a[i]]==0)temp.erase(a[i]);
            auto val=a[i];
            if (val%p==0){
                if (mp.count(val/p) and temp.count(1LL*val*p)){
                ans+=1LL*mp[val/p]*temp[1LL*val*p];
                }
            }
            
            mp[a[i]]++;
        }
        cout<<ans<<endl;
    }

    int main ()
    {
        speed;
        solve();
        return 0;
    }