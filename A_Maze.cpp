#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    char A[N][M];
    for(ll i=0;i<N;++i)  
        for(ll j=0;j<M;++j)
            cin>>A[i][j];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if(K==0)
            {
                j=M;i=N;break;
            }
            if(A[i][j]=='.')
            {
                A[i][j]='X';--K;
            }
            
        }
    }

    for(ll i=0;i<N;++i)  
    {
        for(ll j=0;j<M;++j)cout<<A[i][j];cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/