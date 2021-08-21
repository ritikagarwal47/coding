#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,m;cin>>N>>m;
    map <ll,bool> M;
    for(ll j=0;j<N;++j)
    {
        ll x;cin>>x;
        M[x]=1;
        for(ll i=1;i*i<=x;++i)
        {
            if(x%i==0)
            {
                if(i*i==x)M[i]=1;
                else 
                {
                    M[i]=1;
                    ll p = x/i;
                    M[p]=1;
                }
            }
        }
    }
    M[1]=0;
    // for(auto i:M)
    // {
    //     cout<<i.first<<' '<<i.second<<'\n';
    // }
    vector<ll> V;//V.push_back(1);
    for(ll j=1;j<=m;++j)
    {
        bool ok=true;
        for(ll i=1;i*i<=j;++i)
        {
            ll p = j/i;
            if(j%i==0 and (M[i]==1 or M[p]==1))
            {
                ok=false;break;
            }
        }
        if(ok)V.push_back(j);
    }
    cout<<V.size()<<'\n';
    for(auto i:V)cout<<i<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/