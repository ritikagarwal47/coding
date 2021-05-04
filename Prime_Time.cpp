#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll ans;
ll dp[1000+1][100000+1];
ll fun(vector<ll> V,ll a,ll b,ll i ,ll N)
{
    if(i==N)
    {
        if(a==b)ans=max(ans,a);
        return ans;
    }
    if(dp[a][b]!=-1)return dp[a][b];
    //cout<<a<<' '<<b<<'\n';
    ll p = fun(V,a+V[i],b,i+1,N);
    ll q =fun(V,a,b*V[i],i+1,N);
    return dp[a][b] = max(p,q);
}
void solve()
{
    ll N;cin>>N;
    vector<ll> V;
    for(ll i=0;i<N;++i)
    {
        ll a,b;cin>>a>>b;
        for(ll j=0;j<b;++j)V.push_back(a);
    }  
    //sort(V.begin(),V.end());
    memset(dp,-1,sizeof(dp));
    ans=0;
    fun(V,0,1,0,V.size());
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/