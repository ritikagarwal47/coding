#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll> getFactorization(ll x) 
{ 
    vector<ll> ans; 
    for(ll i=2;i<=1000000;++i)
    {
        ll p=1;
        while(x%i==0)
        {
            p*=i;x/=i;
        }
        if(p!=1)ans.push_back(p); 
    }
    return ans; 
} 
ll mn = LLONG_MAX;
ll K;
void fun(vector<ll> &V,vector<ll> &ans , ll i)
{
    if(i==V.size())
    {
        ll s=0;
        for(ll j=0;j<ans.size();++j)s+=ans[j];
        mn = min(mn,s);
        return;
    }
    for(ll j=0;j<ans.size();++j)
    {
        ans[j] *= V[i];
        fun(V,ans,i+1);
        ans[j] /= V[i];
    }
}
void solve()
{
    mn = LLONG_MAX;
    ll X;cin>>K>>X;
    vector<ll> V = getFactorization(X);
    if(V.size()<=K)
    {
        ll ans=0;
        for(ll i=0;i<V.size();++i)ans += V[i];
        cout<< ans + K - V.size() <<'\n';
        return;
    }
    mn = LLONG_MAX;
    vector<ll> ans (K,1);
    fun(V,ans,0);
    cout<< mn <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/