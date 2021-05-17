#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin >> s;
    ll n = s.size();
    string zero = "", one = "";
    ll ans = 0;
    for(ll i = 0; i < n;++i)
    {
        zero ="";
        one = "";
        for (int j = 0; j < n; ++j)
        {
            if (j <= i)zero += "0",one += "1";
            else zero += "1",one += "0";
        } 
        ll zz = 0, oo = 0;
        for (ll j = 0; j < n; ++j)
        {
            if (s[j] != zero[j])++zz;
            else if (s[j] != one[j])++oo;
        }
        if (i == 0)ans = min(zz, oo);
        else ans = min({ans, zz, oo});
    }
    cout << ans<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/