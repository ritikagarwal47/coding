#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    //ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll x;bool ok=false;ll c=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x!=0 and x!=1)++c;
    }
    if(N==1)
    {
        cout<<"no\n";return;
    }
    if(c<=1)cout<<"yes\n";
    else cout<<"no\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/