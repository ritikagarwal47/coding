#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N+1]; for(ll i=1;i<=N;++i)cin>>A[i];//,sum+=A[i];
    //vector<pair<ll,ll>> 
    ll vis[N+1]={0};
    ll ans=0,mx=0;
    for(ll i=1;i<=N;++i)
    {
        mx = 0;
        //ll a=0;
        if(vis[i]==0)
        {
            for(ll j=i;j<=N;)
            {
                if(vis[j])break;
                mx += A[j];
                vis[j]=1;
                j+=A[j];
            }
        }
        ans = max(ans,mx);
    }
    cout<< ans <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/