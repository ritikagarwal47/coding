#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,Q;cin>>N>>M>>Q;
    ll A[N][M];
    map<ll,ll> R,C;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cin>>A[i][j];
            C[j+1] = j+1;
        }
        R[i+1]=i+1;
    }
    while(Q--)
    {
        char a;ll b,c;cin>>a>>b>>c;
        if(a=='r')swap(R[b],R[c]);
        else if(a=='c')swap(C[b],C[c]);
        else cout<<A[R[b]-1][C[c]-1] <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/