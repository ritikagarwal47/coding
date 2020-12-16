#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll bit[100000+5];
ll N;
ll sum(ll i)
{
    ll ans=0;
    while(i>0)
    {
        ans += bit[i];
        i -= i&(-i);
    }
    return ans;
}
void update(ll i , ll x)
{
    while(i<=N)
    {
        bit[i]+= x;
        i += i&(-i);
    }
}
void solve()
{
    ll M;cin>>N>>M;
    ll A[N+1];//for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=1;i<=N;++i)
    {
        cin>>A[i];
        update(i,A[i]);
    }
    while(M--)
    {
        ll t;cin>>t;
        if(t==1)
        {
            ll i,v;cin>>i>>v;
            //A[i]=v;
            update(i,v-A[i]);A[i]=v;
        }
        else
        {
            ll s;cin>>s;
            ll l=1,h=N;
            bool ok=true;
            while(l<=h)
            {
                ll m = (l+h)/2;
                ll ans = sum(m);
                if(ans==s)
                {
                    cout<<"Found "<<m<<'\n';
                    ok = false;break;
                }
                else if(ans>s)h=m-1;
                else l=m+1;
            }
            if(ok)cout<<"Not Found\n";
        }
        
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/