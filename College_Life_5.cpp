#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];  
    ll B[M];for(ll i=0;i<M;++i)cin>>B[i];
    sort(A,A+N);sort(B,B+M);
    ll ans=0;bool ok=false;
    ll i=0,j=0;
    while(i<N and j<M)
    {
        if(!ok and A[i]<B[j])++i;
        else if(ok and A[i]>B[j])++j;
        else if(ok and A[i]<B[j])
        {
            ++i;ok=false;++ans;
        }
        else if(!ok and A[i]>B[j])
        {
            ++j;ok=true;++ans;
        }
        //cout<<ans<<' '<<i<<' '<<j<<'\n';
    }
    //if(!ok)++ans;
    //cout<< ok<<'\n';
    cout<< (ans + 1 )<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/