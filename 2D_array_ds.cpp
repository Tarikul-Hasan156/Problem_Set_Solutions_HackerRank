//بِسْمِ ٱللّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp " "
#define endl '\n'
using namespace std;
     
void solve ()
{
    vector<vector<ll>>vv(7,vector<ll>(7));
    for (int i=1;i<7;i++){
        for (int j=1;j<7;j++){
            cin>>vv[i][j];
        }
    }
    ll mx=LLONG_MIN;
    for (int row=1;row<=4;row++){
        for (int col=1;col<=4;col++){
            ll temp=0;
                 for (int i=row,k=0;i<row+3;i++,k++){
                for (int j=col,m=0;j<col+3;j++,m++){
                    if (i==row+1){
                        if (k==m)
                        temp+=vv[i][j];
                    }else
                    temp+=vv[i][j];
                }
            }
            mx=max(mx,temp);
        }
    }
    
    cout<<mx<<endl;
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