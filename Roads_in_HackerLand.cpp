#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N,M,ans=0;
ll par[10000+4];
ll find(ll N)
{
    if(N==par[N])return N;
    return par[N] = find(par[N]);
}
void merge(ll a,ll b,ll w)
{
    a = find(a);
    b = find(b);
    if(a!=b)
    {
        par[a] = b;
        ans+=w;
        //cout<<ans<<'\n';
    }
}
void decToBinary(ll n) 
{ 
    int binaryNum[32];
    int i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    }
    for (ll j = i - 1; j >= 0; j--)cout << binaryNum[j]; 
} 
void solve()
{
    cin>>N>>M;
    ll a,b,w;
    for(ll i=0;i<=N;++i)par[i]=i;
    vector<pair<ll,pair<ll,ll>>> V;
    while(M--)
    {
        cin>>a>>b>>w;
        V.push_back(make_pair((ll)pow(2,w),make_pair(a,b)));
    }
    sort(V.begin(),V.end());
    for(ll i=0;i<V.size();++i)
    {
        merge(V[i].second.first,V[i].second.second,V[i].first);
    }
    decToBinary(ans);
    //cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/