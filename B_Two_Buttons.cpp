#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N,M;cin>>N>>M;
     if(M<=N)cout<<abs(M-N)<<'\n';
    else
    {
        ll ans=0;
        while(true)
        {
            if(N==M)
            {
                cout<<ans<<'\n';return;
            }
            else if(M>N)
            {
                if(M&1)
                {
                    M++;ans++;
                }
                else 
                {
                    M/=2;ans++;
                }
            }
            else
            {
                ans += abs(N-M);
                M=N;
            }
        }
        // ans += min(abs(M-N),abs(M - 2*N) + 1);
        // cout<<ans<<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/