#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x,ans=1;
    bool ok=true;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        ll p = sqrt(x);
        if(p*p!=x)
        {
            ok=false;
        }
    }  
    //ll p = sqrt(ans);
    if(ok)cout<<"NO\n";
    else cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/