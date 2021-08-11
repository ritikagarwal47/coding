#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i]   ;
    sort(A,A+N);
    ll p = A[0];
    bool ok=true;
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        if(A[i]==p){}
        else if(A[i]>(2*p))++ans;
        else 
        {
            ok=false;break;
        }
    }
    if(ok)
    {
        cout<<ans<<'\n';return;
    }
    cout<<N<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/