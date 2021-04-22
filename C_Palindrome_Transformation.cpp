#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;--N;--K;
    string s;cin>>s;
    if(K>N/2)K = N - K;
    ll ans=0,a=-1,b=-1;
    bool ok=true;
    for(ll i=0;i<=N/2;++i)
    {
        if(s[i]!=s[N-i])
        {
            ll p = abs(s[i]-s[N-i]);
            ans += min(p,26-p);
            if(ok)a=i,ok=false;
            b=i;
        }
    } 
    if(a==-1 and b==-1)
    {
        cout<<ans<<'\n'; return;
    }
    ans+= min(abs(K-a),abs(K-b));
    //cout<<ans<<'\n'; 
    ans+= abs(a-b);
    cout<<ans<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/