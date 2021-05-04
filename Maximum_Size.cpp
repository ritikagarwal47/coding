#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll c=0;ll N,M;
ll dx[] = {0,1,0,-1};
ll dy[] = {1,0,-1,0};
bool valid(ll i,ll j)
{
    if(i<N and i>=0 and j<M and j>=0)return true;
    return false;
}
//template <typename TwoD>;
void dfs(vector<vector<int>>& vis,ll i,ll j,string *A)//,ll *vis[])
{
    vis[i][j]=1;
    ++c;
    for(ll k=0;k<4;++k)
    {
        ll x = dx[k] + i ;
        ll y = dy[k] + j;
        if(valid(x,y) and vis[x][y]==0 and A[x][y]=='1')
        {
            dfs(vis,x,y,A);
        }
    }
}
void solve()
{
    cin>>N>>M;
    string A[N]; 
    for(ll i=0;i<N;++i)cin>>A[i];
        //for(ll j=0;j<M;++j)
    vector<vector<int>> vis(N , vector<int> (M, 0));
    //vect vis[N][M];memset(vis,0,sizeof(vis));
    vector<ll> V;

    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]=='1' and vis[i][j]==0)
            {
                c=0;
                dfs(vis,i,j,A);
                V.push_back(c);
            }
        }
    }
    sort(V.begin(),V.end(),greater<ll>());
    //for(ll i:V)cout<<i<<' ';cout<<'\n';
    ll ans=0;
    for(ll i=0;i<V.size();++i)
    {
        if(i&1)ans+=V[i];
    }            
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/