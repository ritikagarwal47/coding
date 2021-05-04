#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;N++;
    ll ans[N+1];
    ans[0]=1;
    ans[1]=1;
    ans[2]=2;
    for(ll i=3;i<=N;++i)
    {
        ans[i] = ans[i-1] + ans[i-2] + ans[i-3];
    }
    cout<< ans[N] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/