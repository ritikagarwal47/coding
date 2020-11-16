#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod;
vector<ll> adj[300000+1];
ll A[300000+1],par[300000+1]; 
vector<pair<ll,ll>> dp[300000+1];
ll fun(ll a,ll b)
{
    //if(a==b)return dp[a].second;
    for(auto i: dp[a])
    {
        if(i.first==b)
        {
            return i.second;
        }
    }
    return 0;
}
// void dfs(ll v,ll cur)
// {
//     //vis[v]=true;
//     //cout<<v<<' '<<cur<<'\n';
//     dp[v] = (cur + (A[v]*A[v])%mod)%mod;
//     for(auto j : adj[v])
//     {
//         //cout<<j<<' '<<dp[v]<<'\n';
//         dfs(j,dp[v]);
//     }

// }
void fun2(ll u,ll v)
{
    if(u==v)
    {
        cout<< (dp[u][0].second)%mod <<'\n';
        return;
    }
    ll ans = 0;
    while(u!=v)
    {
        ans = (ans + (A[u]*A[v])%mod)%mod;
        u=par[u];v=par[v];
    }
    cout<< (ans +  dp[u][0].second)%mod <<'\n';
}
ll level[300000+1];
void bfs() 
{ 
    queue<pair<ll,ll>> q1, q2; 
    ll c=1;
    q1.push({1,c});
    //level[q1.fir]
    while (!q1.empty() or !q2.empty()) 
    { 
        ++c;
        vector<ll> op;
        while (!q1.empty()) 
        { 
            for(auto i : adj[q1.front().first])
            {
                q2.push({i,c});
            }
            op.push_back(q1.front().first);
            level[q1.front().first] = q1.front().second;
            q1.pop(); 
        } 
        for(ll i=0;i<op.size();++i)
        {
            for(ll j=0;j<op.size();++j)
            {
                if(op[i]==1 and op[j]==1)
                {
                    dp[op[i]].push_back({op[j],A[1]*A[1]});
                }
                else
                {
                    ll a = par[op[i]];
                    ll b = par[op[j]];
                    dp[op[i]].push_back({op[j], (fun(a,b) + A[op[i]]*A[op[j]])%mod});

                }
                
            }
        }  
        ++c;
        vector<ll> op1;
        while (!q2.empty()) 
        { 
            for(auto i : adj[q2.front().first])
            {
                q1.push({i,c});
            }
            op1.push_back(q2.front().first);
            level[q2.front().first] = q2.front().second;
            q2.pop(); 
        }
        for(ll i=0;i<op1.size();++i)
        {
            for(ll j=0;j<op1.size();++j)
            {
                if(op1[i]==1 and op1[j]==1)
                {
                    dp[op[i]].push_back({op[j],A[1]*A[1]});
                }
                else
                {
                    ll a = par[op1[i]];
                    ll b = par[op1[j]];
                    //dp[op1[i]][op1[j]] = (dp[a][b] + A[op1[i]]*A[op1[j]])%mod;
                    dp[op1[i]].push_back({op1[j], (fun(a,b) + A[op1[i]]*A[op1[j]])%mod});

                }
                
            }
        }   
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll N,Q;cin>>N>>Q;
    for(ll i=1;i<=N;++i)
    {
        cin>>A[i];par[i]=1;
    }
    mod = (ll)pow(2,32);
    ll u,v;
    for(ll i=1;i<N;++i)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        par[v]=u;
    }
    bfs();
    while(Q--)
    {
        cin>>u>>v;
        if(level[u]<dp[u].size())fun2(u,v);
        else cout<<(fun(u,v))%mod <<'\n';
    }
    return 0;
}