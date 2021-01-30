#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll x;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=0;i<N;++i)
    {
        x=A[i];
        while(1)
        {
            if(x%K==0)break;
            if(x>20000000000)
            {
                cout<<"NO\n";return;
            }
            

            x = x + x;
        }
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/