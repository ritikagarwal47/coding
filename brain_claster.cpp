#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N][M];  
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>A[i][j];
    }
    ll dx[] = {-1,-1,-1,0,0,1,1,1};
    ll dy[] = {-1,0,1,-1,1,-1,0,1};
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            ll c=0;
            for(ll k=0;k<8;++k)
            {
                ll x = i + dx[k];
                ll y = j + dy[k];
                if(x>=0 and y>=0 and x<N and y<M)
                {
                    c+=A[x][y];
                }
            }
            ans = max(ans,c);
        }
    }
    return ans;
}
int main()
{
    solve();
}