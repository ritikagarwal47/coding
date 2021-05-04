#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        ll B[i+1];
        for(ll j=i;j>=0;--j)B[j]=A[j];
        sort(B,B+i+1);
        bool ok=true;
        for(ll j=0;j<=i;++j)
        {
            if(B[j]!=(j+1))
            {
                ok=false;break;
            }
        }
        if(ok)++ans;
        //cout<<ans<<' ';
    }  
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/