#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll ans=s.size();ll n=ans;
    for(ll i=0;i<n;++i)
    {
        for(ll j=i+1;j<n;++j)
        {
            ll a = (s[i]-'0')*10+(s[j]-'0');
            if(a%25==0)ans=min(ans,n-i-2);
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/