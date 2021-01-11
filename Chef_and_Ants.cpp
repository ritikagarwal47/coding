#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<ll> V[N];
    map<ll,ll> mp;
    for(ll i=0;i<N;++i)
    {
        ll M;cin>>M;
        ll x;//,p=0,n=0;
        //map<ll,ll> mp;
        for(ll j=0;j<M;++j)
        {
            cin>>x;
            mp[abs(x)]++;
            V[i].push_back(x); 
        }
        sort(V[i].begin(),V[i].end());
    }
    //sort(V.begin(),V.end());
    //cout<< p*n <<'\n';
    ll ans=0,c=0;
    for(auto j : mp)
    {
        if(j.second>1)++c;
    }
    for(ll i=0;i<N;++i)
    {
        ll l = V[i].size();
        for(ll j=0;j<l;++j)
        {
            ll p = 0;
            if(mp[abs(V[i][j])]>1 and V[i][j]>0) p = l - (j + 1);
            else if(mp[abs(V[i][j])]>1)p=j;
            else if(V[i][j]>0)p = lower_bound(V[i].begin(),V[i].end(),-V[i][j]) - V[i].begin(); 
            else p = l - (upper_bound(V[i].begin(),V[i].end(),-1*V[i][j]) - V[i].begin());
            ans += p;
        }
    }
    cout<< ans + c <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/