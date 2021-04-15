#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[100000+5],A[100000+5],B[100000+5];
ll ans;ll N;
ll fun(ll a,ll b,ll c)
{
    //cout<<ans<<"ans\n";
    if(a>=N)return N;
    if(b<=0)return a;
    if(dp[a])return fun(dp[a],b,c + (dp[a]-a));
    ll p = A[a]-B[a];
    //cout<<p<<"p\n";
    if(p>b)
    {
        B[a]+=b;ans+=b*c;
        return a;
    }
    else
    {
        B[a]+=p;ans+=p*c;
        return dp[a] = fun(a+1,b-p,c+1);
    }
}
void solve()
{
    cin>>N;
    for(ll i=0;i<N;++i)cin>>A[i];   
    memset(dp,0,sizeof(dp)); memset(B,0,sizeof(B)); 
    ll Q;cin>>Q;
    while(Q--)
    {
        ll a,b;cin>>a>>b;ans=0;
        fun(a-1,b,0);
        //for(ll i=0;i<N;++i)cout<<dp[i]<<' ';cout<<'\n';
        cout<<ans<<'\n';
        // ll f=a-1;
        // ans=0;ll c=0;a--;
        // while(b>0 and a<N)
        // {
        //     if(dp[a]!=0)
        //     {
        //         c+=(dp[a]-a);a=dp[a];
        //         //cout<<c<<' '<<a<<'\n';
        //     }
        //     if(B[a]<A[a])
        //     {
        //         ll p = A[a] - B[a];
        //         p = min(p,b);
        //         B[a]+=p;b-=p;ans+=p*c;
        //     }
        //     c++;a++;//cout<<ans<<' ';
        // }
        // for(ll i=a-2;i>=f;--i)
        // {
        //     if(dp[i]!=0)break;
        //     dp[i]=a;
        // }
        
        //for(auto i:dp)cout<<i<<' ';cout<<'\n';
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/