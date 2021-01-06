#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll fun(string S, string T) 
{ 
    ll m = T.length();
    ll n = S.length(); 
    if (m > n) return 0; 
    ll dp[m + 1][n + 1]; 
    for (ll i = 1; i <= m; i++) dp[i][0] = 0; 
    for (ll j = 0; j <= n; j++) dp[0][j] = 1; 
    for (ll i = 1; i <= m; i++) 
    { 
        for (ll j = 1; j <= n; j++) 
        { 
            if (T[i - 1] != S[j - 1]) 
                dp[i][j] = dp[i][j - 1]; 
            else
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1]; 
        } 
    } 
    return dp[m][n]; 
} 
  
void solve()
{
    string s;cin>>s;
    ll Q;cin>>Q;
    string A,B;
    while(Q--)
    {
        char a;ll n;cin>>a>>n;
        if(a=='p')
        {
            A=s.substr(0,n);
            B="ninjas";
            cout<<fun(A,B)<<'\n';
            continue;
        }
        A=s.substr(s.size()-n,n);
        B="ninjas";
        cout<<fun(A, B)<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/