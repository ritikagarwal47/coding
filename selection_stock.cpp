#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int selectiostock(int s,vector<int> c,vector<int> f)
{
    int n = c.size();
    int dp[n + 1][s + 1];
    vector<int> val;
    for(int i=0;i<n;++i)val.push_back(f[i]-c[i]);
    for(int i = 0; i <= n; i++)
    {
        for(int w = 0; w <= s; w++)
        {
            if (i == 0 or w == 0)dp[i][w] = 0;
            else if (c[i - 1] <= w)dp[i][w] = max(val[i - 1] + dp[i - 1][w - c[i - 1]],dp[i - 1][w]);
            else dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][s];
}
void solve()
{
    int n;cin>>n;
    int s;cin>>s;
    vector<int> v1,v2;
    for(int i=0;i<n;++i)
    {
        int x;cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n;++i)
    {
        int x;cin>>x;
        v2.push_back(x);
    }
    cout<< selectiostock(s,v1,v2)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/