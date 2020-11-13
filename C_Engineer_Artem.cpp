#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N,M;
bool isvalid(ll i,ll j)
{
    if(i<0 or j<0 or i>N-1 or j>M-1)return false;
    return true;
}
void solve()
{
    cin>>N>>M;
    ll A[N][M];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>A[i][j];
    }
    ll curr=0;
    ll dx[] = {-1,0,1,0};
    ll dy[] = {0,-1,0,1};
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            bool f=true;
            for(ll k=0;k<4;++k)
            {
                ll curr = A[i][j];
                if(isvalid(i+dx[k],j+dy[k]))
                {
                    if(A[i+dx[k]][j+dy[k]]==curr+1)f=false;
                }
            }
            if(f)++A[i][j];
        }
    }
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cout<<A[i][j]<<' ';
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/