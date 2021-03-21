#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation

// ll vis[100+5][100+5];
// ll dx[] = {0,-1};
// ll dy[] = {-1,0};
// bool valid(ll i ,ll j)
// {
//     if( i>=0 and j>=0 and i<R and j<C and A[i][j]==1 and vis[i][j]==0)return true;
//     return false;
// }
// ll ans=0;
// void dfs(ll i, ll j, ll r=1,ll c=1)
// {
//     vis[i][j]=1;
//     if(r==(2*c) and r!=1 and c!=1)
//     {
//         //cout<<r<<' '<<c<<'\n';
//         //cout<<i<<' '<<j<<'\n';
//         ++ans;
//     }
//     if(valid(i+1,j))
//     {
//         dfs(i+1,j,r+1,c);
//     }
//     // if(valid(i-1,j))
//     // {
//     //     dfs(i-1,j,r+1,c);
//     // }
//     if(valid(i,j+1))
//     {
//         dfs(i,j+1,r,c+1);
//     }
//     if(valid(i,j-1))
//     {
//         dfs(i,j-1,r,c+1);
//     }
// }
void solve()
{
    ll R,C;
    
    cin>>R>>C;
    ll A[R][C]={};
    //ans=0;
    //vector<pair<ll,ll>> V;
    for(ll i=0;i<R;++i)
    {
        for(ll j=0;j<C;++j)
        {
            cin>>A[i][j];
            //if(A[i][j]==1)V.push_back({i,j});
        }
    }
    // for(ll i=0;i<V.size();++i)
    // {
    //     memset(vis,0,sizeof(vis));
    //     //cout<<V[i].first<<' '<<V[i].second<<' ';
    //     dfs(V[i].first,V[i].second);
    // }
    // cout<<ans<<'\n';
    ll u[R][C]={},l[R][C]={},r[R][C]={},d[R][C]={};
    for(ll i=0;i<R;++i)
    {
        l[i][0]=A[i][0];
        r[i][C-1]=A[i][C-1];
    }
    for(ll i=0;i<C;++i)
    {
        u[0][i]=A[0][i];
        d[R-1][i]=A[R-1][i];
    }
    for(ll i=0;i<R;++i)
    {
        for(ll j=0;j<C;++j)
        {
            if(A[i][j]==1)
            {
                if(i>0)
                {
                    u[i][j]+=u[i-1][j]+1;
                }
                if(j>0)
                {
                    l[i][j]+=l[i][j-1]+1;
                }
            }
        }
    }
    for(ll i=R-1;i>=0;--i)
    {
        for(ll j=C-1;j>=0;--j)
        {
            if(i<(R-1))d[i][j]+=d[i+1][j]+1;
            if(j<(C-1))r[i][j]+=r[i][j+1]+1;
        }
    }
    ll ans=0LL,p=0LL;
    for(ll i=0;i<R;++i)
    {
        for(ll j=0;j<C;++j)
        {
            if(A[i][j]==1)
            {
                if(l[i][j]>1)
                {
                    ans+= max(p, min(l[i][j],u[i][j]/2) - 1) + max(p,min(l[i][j],d[i][j]/2) - 1);
                }
                if(u[i][j]>1)
                {
                    ans+= max(p,min(l[i][j]/2,u[i][j]) - 1) + max(p,min(u[i][j],r[i][j]/2) - 1);
                }
                if(r[i][j]>1)
                {
                    ans+= max(p,min(r[i][j],u[i][j]/2) - 1) + max(p,min(r[i][j],d[i][j]/2) - 1);
                }
                if(d[i][j]>1)
                {
                    ans+= max(p,min(d[i][j],l[i][j]/2) - 1) + max(p,min(d[i][j],r[i][j]/2) - 1);
                }
            }
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(ll i=1;i<=T;++i)
{
    cout<<"Case #"<<i<<": ";
    solve();
    }
    exit(0);
}/*Solved By:- Ritik Agarwal*/