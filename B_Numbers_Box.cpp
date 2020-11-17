#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N][M];
    ll s=0,c=0,mn=LLONG_MAX;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cin>>A[i][j];
            s+= abs(A[i][j]);
            mn = min(mn,abs(A[i][j]));
            if(A[i][j]<0)++c;
        }
    }
    if(c&1)cout<< s  - 2*mn <<'\n';
    else cout<< s <<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/