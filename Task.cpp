#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;string a,b;cin>>N>>a>>b;
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        if(a[i]!=b[i])
        {
            if(i<N-1 and a[i]==b[i+1] and b[i]==a[i+1])++i;
            ans++;
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