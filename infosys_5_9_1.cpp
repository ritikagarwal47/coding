#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll p =N/3;
    vector<pair<ll,ll>> B,C;
    for(ll i=0;i<N-p;++i)B.push_back({A[i],i});
    for(ll i=p;i<N;++i)C.push_back({A[i],i});
    sort(B.begin(),B.end(),greater<pair<ll,ll>>());
    sort(C.begin(),C.end());
    ll vis[N];memset(vis,0,sizeof(vis));
    ll sa=0,sb=0;ll c=0;
    for(ll i=0;i<B.size();++i)
    {
        if(!vis[B[i].second])
        {
            sa+=B[i].first;vis[B[i].second]=1;++c; 
            //cout<<B[i].first<<' ';
        }
        if(c==p)break;
    }
    //cout<<'\n';
    
    c=0;
    for(ll i=0;i<C.size();++i)
    {
        if(!vis[C[i].second])
        {
            sb+=C[i].first;vis[C[i].second]=2;++c;
            //cout<<C[i].first<<' ';
        }
        if(c==p)break;
    }
    //cout<<'\n';
    //for(auto i:vis)cout<<i<<' ';cout<<'\n';
    ll x=0,y=N-1;
    while(x<y)
    {
        while(vis[x]!=2)++x;

        while(vis[y]!=1)--y;

        if(x<y)
        {
            //cout<< sa << ' '<<sb<<'\n';
            sa = sa -  A[y] + A[x];
            sb = sb -  A[x] + A[y];
            ++x;--y;
        }
    }
    //cout<< sa << ' '<<sb<<'\n';
    cout<< (sa-sb) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/