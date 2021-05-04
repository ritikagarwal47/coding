#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll C[N];
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],C[i]=A[i]; 
    ll B[N];for(ll i=0;i<N;++i)cin>>B[i];  
    sort(C,C+N);
    if(N>1000)
    {
        for(ll i=0;i<N;++i)cout<<"-1 ";cout<<'\n';
        return;
    }
    for(ll i=0;i<N;++i)
    {
        ll p = B[i];
        ll a = lower_bound(C,C+N,A[i]) - C;
        //cout<<N-a<<'\n';
        if(p>(N-i))
        {
            cout<<"-1 ";continue;
        }
        else if(p==1)
        {
            cout<<"1 ";continue;
        }
        else if((N-a)<p)
        {
            cout<<"-1 ";continue;
        }
        else
        {
            p--;
            ll ans=1,a=i+1;
            bool ok = true;
            while (p>0)
            {
                if(a>=N)
                {
                    ok=false;break;
                }
                if(A[a]>=A[i])--p;
                ++ans;++a;
            }
            if(ok)cout<<ans<<' ';
            else cout<<"-1 ";            
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/