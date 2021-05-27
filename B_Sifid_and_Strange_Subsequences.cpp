#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];sort(A,A+N);
    ll i=0,j=N-1;ll p = A[0];
    ll ans=1;//0;
    ll mx = LLONG_MAX; 
    while(ans<N)
    {
        p = max(p,A[ans]);
        mx = min(mx,abs(A[ans]-A[ans-1]));
        if(mx<p)
        {
            cout<<ans<<'\n';return;
        }
        //mx = 
        ++ans;
        //--j;
    }
    cout<<N<<'\n';
    //cout<< (j-i + 1) <<'\n';
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/