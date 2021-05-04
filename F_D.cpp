#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    N = 2*N -1;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(i == 0 || i == N - 1 || i == j || i ==abs(N-j -1) )cout<<j+1;
            else cout<<' ';
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/