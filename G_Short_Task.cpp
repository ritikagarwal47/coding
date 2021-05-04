#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[10000000+1];
void pre()
{
    vector<ll> p;
    ll A[10000000+1];
    A[1] = 1;dp[1]=1;
    for (ll i = 2; i <=10000000;++i) 
    {
        if (!A[i])p.push_back(i),A[i] = i;

        for (ll j = 0;p[j]*i<=10000000; ++j) 
        {
            A[p[j] * i] = p[j];
            if (i % p[j] == 0) break;
        }
    }
    ll sum[10000000+1];
    sum[1] = 1;
    for (ll i = 2; i <=10000000; ++i) 
    {
        ll j = i;ll v = 1;
        while (j % A[i] == 0) j /= A[i], v = (v * A[i]) + 1;

        sum[i] = sum[j] * v;

        if (sum[i] <=10000000 and !dp[sum[i]]) dp[sum[i]] = i;
    }
}
void solve()
{
    ll X;cin>>X;
    if(dp[X])cout<< dp[X] <<'\n';    
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/