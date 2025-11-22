#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll int64_t
#define sp ' '
#define endl '\n'
using namespace std;

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
    string s;cin>>s;int x=s.size();
    if (s[0]==')'  or s[0]=='}' or s[0]==']'){
        cout<<"NO"<<endl;return;
    }
    stack<char>st;
    for (int i=0;i<x;i++){
        if (s[i]==')'){
            if (st.empty())goto level;
           else if(st.top()=='(')st.pop();
            else {
                goto level;
            }
        }else if (s[i]=='}'){
            if (st.empty())goto level;
           else if (st.top()=='{')st.pop();
            else {
                    goto level;
            }
        }else if (s[i]==']'){
            if (st.empty())goto level;
            else if (st.top()=='[')st.pop();
             else {
                goto level;
            }   
        }else{
            st.push(s[i]);
        }
    }
    if (!st.empty()){
        level:
        cout<<"NO"<<endl;
    }else{
        
        cout<<"YES"<<endl;
    }
}

int main ()
{
    speed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}