#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll W;cin>>W;
    ll mn=LONG_MAX;
    ll A[10];for(ll i=1;i<=9;++i)cin>>A[i],mn=min(mn,A[i]);
    if(W<mn)
    {
        cout<<"-1\n";return;
    }
    ll N = W/mn;
    while(N--)
    {
        for(ll i=9;i>=1;--i)
        {
            if(W>=A[i] and (W-A[i])/mn==N)
            {
                cout<<i;
                W-=A[i];break;
            }
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/