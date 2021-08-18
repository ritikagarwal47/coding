#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end re=5sult of coders personal growth is,there codes becomes there documentation
string dp[100000+5];
void pre()
{
    dp[0]="0";dp[1]="1";
    for(ll i=2;i<=100005;++i)
    {
        dp[i] = dp[i-1] + dp[i-2];
        ll p = stoll(dp[i]);
        p%=mod;
        dp[i]=to_string((ll)p);
    }
}
ll findSubSequence(string s, ll num)
{ 
    ll res = 0;
    ll i = 0;
    while (num) 
    {
        if (num & 1)
            res += s[i] - '0';
        i++;
         
        num = num >> 1;
    }
 
    return res;
}
ll combinedSum(string s)
{
    ll n = s.length();
    ll c_sum = 0;
    ll range = (1 << n) - 1;
    for (ll i = 0; i <= range; i++)
        c_sum += findSubSequence(s, i);
    return c_sum;
}
void solve()
{
    ll N;cin>>N;
    //string s = to_string(dp[N]);
    //cout<<s<<' ';
    cout<< combinedSum(dp[N]) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/