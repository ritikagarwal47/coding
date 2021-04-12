#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll p = (N+1)/2 ;
    if(K>=p)
    {
        cout<<"-1\n";return;
    } 
    ll i=1,j=N;
    ll A[N];
    for(ll k=0;k<N;++k)
    {
        if(K>0)
        {
            A[k]=i;A[k+1]=j;i++;j--;k++;K--;
        }
        else
        {
            A[k]=i;++i;
        }
    }
    for(auto i : A)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/