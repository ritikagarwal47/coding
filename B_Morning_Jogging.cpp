#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N][M],B[N][M],C[M];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>C[j];
        sort(C,C+M);
        for(ll j=0;j<M;++j)A[i][j]=C[j];
    }  
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=0;j<M;++j)cout<<A[i][j]<<' ';cout<<'\n';
    // }
    vector<pair<ll,ll>> V;
    for(ll i=0;i<N;++i)V.push_back({0,M-1});
    for(ll i=0;i<M;++i)
    {
        ll mn=LONG_MAX,a=0;
        for(ll j=0;j<N;++j)
        {
            ll x = A[j][V[j].first];
            if(x<mn)
            {
                mn=x;a=j;
            }
        }
        //cout<<mn<<' '<<a<<'\n';
        //V[a].first++;
        for(ll j=0;j<N;++j)
        {
            if(j==a)
            {
                B[j][i] = mn;
                V[j].first++;
            }
            else
            {
                B[j][i] = A[j][V[j].second];//[i];
                V[j].second--;
            }
        }
    }
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cout<<B[i][j]<<' ';cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/