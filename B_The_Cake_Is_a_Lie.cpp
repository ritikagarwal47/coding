#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll N,M,K;
int dp[100+2][100+2];
bool fun(ll i,ll j,ll cur)
{
    if(i==N and j==M)
    {
        if(cur==K)return true;
        return false;
    }
    if(dp[i][j]!=-1)return dp[i][j];
    if(i==N)return fun(i,j+1,cur+i);
    if(j==M)return fun(i+1,j,cur+j);
    bool ok = fun(i,j+1,cur+i)|fun(i+1,j,cur+j);
    return dp[i][j] = ok;
}
void solve()
{
    cin>>N>>M>>K;
    memset(dp,-1,sizeof(dp));
    if(fun(1,1,0))cout<<"YES\n";
    else cout<<"NO\n"; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/