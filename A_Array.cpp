#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N],vis[N]={0};for(ll i=0;i<N;++i)cin>>A[i];
    
    ll M=0,i;
    for(i=0;i<N;++i)
    {
        if(A[i]<0)
        {
            cout<<"1 ";--M;
            vis[i]=1;
            cout<<A[i]<<'\n';break;
        }
    }
    for(i=0;i<N;++i)
    {
        if(A[i]>0)
        {
            cout<<"1 ";--M;
            vis[i]=1;
            cout<<A[i]<<'\n';break;
        }
    }
    if(i==N)
    {
        ll c=2;
        cout<<c<<' ';
        for(ll j=0;j<N and c;++j)
        {
            if(vis[j]==0 and A[j]<0)
            {
                --c;
                cout<<A[j]<<' ';vis[j]=1;--M;
            }
        }
        cout<<'\n';
    }
    cout<< N + M <<' ';
    for(ll j=0;j<N;++j)
    {
        if(!vis[j])
        {
            cout<<A[j]<<' ';
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/