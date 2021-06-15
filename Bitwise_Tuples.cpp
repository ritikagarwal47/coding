#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll power(ll x,ll y,ll p)
{
    ll res = 1;  
    x = x % p; 
    if (x == 0) return 0;  
    while (y > 0)
    {
        if (y & 1)res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
ll brute(ll N,ll M)
{
    ll p = (1<<M);
    //ll A[N];
    if(N==1)
    {
        return 1;
        // for(ll i=0;i<p;++i)
        // {
        //     if()
        // }
    }
    else if(N==2)
    {
        ll ans=0;
        for(ll i=0;i<p;++i)
        {
            for(ll j=0;j<p;++j)
            {
                if((i&j)==0)
                {
                    cout<<i<<' '<<j<<'\n';
                    ++ans;
                }
            }
        }
        return ans;
    }
    else if(N==3)
    {
        ll ans=0;
        for(ll i=0;i<p;++i)
        {
            for(ll j=0;j<p;++j)
            {
                for(ll k=0;k<p;++k)
                { 
                    if((i&j&k)==0)
                    {
                    cout<<i<<' '<<j<<' '<<k<<'\n';
                    ++ans;
                    }
                }
            }
        }
        return ans;
    }
    else //if(N==4)
    {
        ll ans=0;
        for(ll i=0;i<p;++i)
        {
            for(ll j=0;j<p;++j)
            {
                for(ll k=0;k<p;++k)
                { 
                    for(ll l=0;l<p;++l)
                    { 
                        if((i&j&k&l)==0)
                        {
                        cout<<i<<' '<<j<<' '<<k<<' '<<l<<'\n';
                        ++ans;
                        }
                    }
                }
            }
        }
        return ans;
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    //ll p = brute(N,M);
    //ll ans = power(N,(1<<M),mod);
    ll a = power(2,N,mod)-1;//cout<<a;
    ll b = power(a,M,mod);
    cout<<b<<'\n';
    //cout<< p<<' '<<ans<<' '<<b<<' '<<ans - p<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/