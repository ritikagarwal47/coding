#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> fact(ll N)
{
    vector<ll> ans;
    for(ll i=1;i*i<=N;++i)
    {
        if(N%i==0)
        {
            if(N==i*i)ans.push_back(i);
            else ans.push_back(N/i),ans.push_back(i);
        }
    }
    return ans;
}
void solve()
{
    ll N;cin>>N;vector<ll> ans;
    string s;cin>>s; 
    ll o=0;
    for(auto i:s)
    {
        if(i=='1')++o;
    }
    ans = fact(N);
    ll p = mod;
    for(auto i:ans)
    {
        vector<ll> A(i);
        for(ll k=0;k<i;++k)
        {
            for(ll j=k;j<N;j+=i)
            {
                if(s[j]=='1')++A[k];
            }
        }
        for(ll k=0;k<i;++k)
        {
            ll a = o - 2*A[k];
            p=min(p,a + N/i);
        }
    }
    cout<<p<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}