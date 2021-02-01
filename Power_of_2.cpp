#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool pow2(ll N)
{
    if(N==0)return false;
    return (ceil(log2(N)) == floor(log2(N)));
}
void solve()
{
    ll N;cin>>N;
    //cout<<N<<' ';
    ll ans=0;
    bool ok=false;
    while(pow2(N))
    {
        N = (ll)log2(N);++ans;
        ok=true;
    }
    if(ok)--ans;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/