#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// ll dp[10000][10000];
ll N;
// ll fun(ll A[],ll l,ll r,ll c,ll X)
// {
//     //cout<<X<<' ';
//     if(X<=0)return c;
//     if(l>r)return N;
//     if(dp[l][r]!=-1)return dp[l][r];
//     if(l==r)return dp[l][r] = fun(A,l+1,r,c+1,X-A[l]);
//     return dp[l][r] = min(fun(A,l+1,r,c+1,X-A[l]),fun(A,l,r-1,c+1,X-A[r]));
// }
void solve()
{
    cin>>N;
    ll s=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];
    ll X;cin>>X;
    if(X>s)
    {
        cout<<"-1\n";return;
    }
    ll p = s-X;
    map<ll,ll> M;
    ll a=0,l=0;
    for(ll i=0;i<N;++i)
    {
        a+=A[i];
        if(a==p)l = i+1;

        if(M.find(a)==M.end())
        {
            M[a]=i;
        }

        if(M.find(a-p)!=M.end())
        {
            l = max(l,i - M[a-p]);
        }

    }
    if(l==0)cout<<"-1\n";
    else cout<< N - l <<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/