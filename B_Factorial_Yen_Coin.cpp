#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll A[11];
// ll ans=LONG_LONG_MAX;
// map<string,ll> dp;
// ll fun(ll N,ll c=0)
// {
//     if(N<0)return LLONG_MAX;
//     if(N==0)return c;
//     ll mn = LLONG_MAX;
//     for(ll i=1;i<=10;++i)
//     {
        
//         dp[k] = fun(N-A[i],c+1);
//     }
//     string k = to_string(N) + "#" + to_string(i);
//     return dp[k] = 
// }
void fun1(ll N)
{
    ll c=0;
    while(N!=0)
    {
        for(ll i=10;i>0;--i)
        {
            if(N>=A[i])
            {
                ++c;
                N-=A[i];
                break;
            }
        }
    }
    cout<<c;
}
void solve()
{
    ll N;cin>>N;
    A[0]=A[1]=1;
    A[2] = 2;
    A[3] = 6;
    A[4] = 24;
    A[5] = 120;
    A[6] = 720;
    A[7] = 5040;
    A[8] = 40320;
    A[9] = 362880;
    A[10] = 3628800;
    fun1(N);
    //cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/