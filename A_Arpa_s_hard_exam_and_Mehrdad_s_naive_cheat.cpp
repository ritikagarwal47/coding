#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll ans=1;
    ll res = 8;
    while(N>0)
    {
        if(N&1)
        {
            ans = ans*res;--N;
            ans%=10;
        }
        else 
        {
            res = res*res;
            res%=10;
            N/=2;
        }
    } 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/