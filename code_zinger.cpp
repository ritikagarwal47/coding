#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool isprime(ll N)
{
    if(N==3 or N==2)return true;
    if(N<=1)return false;
    if(N%2==0)return false;
    for(ll i=2;i*i<=N;++i)
    {
        if(N%i==0)return false;
    }
    return true;
}
ll solve()
{
    ll N,K;cin>>N>>K;
    string s = to_string(N);
    bool ok=true;
    ll i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            ok=false;break;
        }
        ++i;--j;
    }
    if(ok)return 1;
    vector<ll> A;
    ll p = N;
    while(p>0)
    {
        A.push_back(p%10);
        p/=10;
    }
    reverse(A.begin(),A.end());
    ll sz = A.size();
    for(ll i=0;i<sz;++i)
    {
        A[i] = A[i]*sz; 
    }
    //for(auto i:A)cout<<i<<' ';cout<<'\n';
    for(ll i=0;i<sz;++i)
    {
        ll a = A[i];
        ll c = 0;
        for(ll j=2;j<a;++j)
        {
            if(isprime(j))
            {
                if((2*j + 1)<a)
                {
                    c+= (2*j) + 1;
                }
            }
        }
        A[i]=c;
    }
    //for(auto i:A)cout<<i<<' ';cout<<'\n';
    ll ans=0;
    for(ll i=0;i<sz;++i)
    {
        for(ll j=i+1;j<sz;++j)
        {
            if((A[i]+A[j])%K==0)++ans;
        }
    }
    return ans;
}
int main()
{
cout<<solve();
}