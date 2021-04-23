#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll vis[500+2][500+2];
ll N,M;
bool valid(ll x,ll y)
{
    if(x>=0 and x<N and y>=0 and y<M)return true;
    return false;
}
void solve()
{
    cin>>N>>M;ll A[N][M], mx=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>A[i][j],mx=max(mx,A[i][j]);
    }  
    memset(vis,0,sizeof(vis));
    queue<pair<ll,ll>> Q;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]==mx)
            {
                Q.push({i,j});
                vis[i][j]=1;
            }
        }
    }  
    ll dx[]={-1,1,0,0,-1,1,-1,1};
    ll dy[]={0,0,-1,1,-1,1,1,-1};
    while(!Q.empty())
    {
        ll x = Q.front().first;
        ll y = Q.front().second;
        Q.pop();
        for(ll i=0;i<8;++i)
        {
            ll X = x + dx[i];
            ll Y = y + dy[i];
            if(valid(X,Y) and vis[X][Y]==0)
            {
                vis[X][Y] = vis[x][y] + 1;
                Q.push({X,Y});
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            //cout<<vis[i][j]<<' ';
            ans = max(ans,vis[i][j]);
        }
        //cout<<'\n';
    }
    cout<<ans-1<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/