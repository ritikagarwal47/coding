#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    map<ll,ll> mp;ll x;
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;mp[x%M]++;
    }
    for(auto i: mp)
    {
        //cout<<ans<<' '<<i.first<<'\n';
        if(i.second==0)continue;
        if(i.first==0)
        {
            ++ans;mp[0]=0;
        }
        else if(mp.find(M - i.first)!=mp.end())
        {
            ll p = mp[M - i.first];
            ll q = i.second;
            if(p==0)
            {
                ans+=q;continue;
            }
            
            if(p==q)++ans;
            else if(p>q)
            {
                ++ans;
                ans+= p-1-q;
            }
            else 
            {
                ++ans;
                ans += (q-1) - p ;
            }
            mp[M - i.first]=0;
        }
        else
        {
            ans+=i.second;
            mp[i.first]=0;
            continue;
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