#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    vector<ll> V;
    for(ll i=1;i*i<=N;++i)
    {
        if(N%i==0)
        {
            if(i*i==N)V.push_back(i);
            else 
            {
                V.push_back(i);
                V.push_back(N/i);
            }
        }
    }
    while(Q--)
    {
        ll T,K;cin>>T>>K;
        ll ans=0;
        if(T==1)
        {
            for(ll i:V)
            {
                if(K%i==0)++ans;
            }
        }
        else if(T==2)
        {
            for(ll i:V)
            {
                if(i%K==0)++ans;
            }
        }
        else
        {
            for(ll i:V)
            {
                if(i%K!=0)++ans;
            }
        }
        cout<<ans<<'\n';
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
