#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    int N,K;
    cin>>N>>K;
    int dp[N+4]={0};
    while(K--)
    {
        int x,y;
        cin>>x>>y;
        dp[x]=1;
        dp[y]=1;
    }  
    int ans=0;
    bool ok=true;
    for(int i=2;i<=N;++i)
    {
        if(dp[i]==1 and ok)
        {
            ++ans;
            ok=false;
        }
        else if(dp[i])
        {
            ok=true;
        }
    }
    if(ok)++ans;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/