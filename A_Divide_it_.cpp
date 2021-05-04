#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    while(N>1)
    {
        if(N%2==0)
        {
            N/=2;++ans;continue;
        }
        if(N%3==0)
        {
            N = 2*N/3;++ans;continue;
        }
        if(N%5==0)
        {
            N = 4*N/5;++ans;continue;
        }
        cout<<"-1\n";
        return;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/