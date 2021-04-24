#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)A[i]=i+1;//,cout<<A[i]<<' ';
    //cout<<'\n';
    for(ll i=0;i<=(N)/2;++i)
    {
        for(ll j=0;j<N;++j)cout<<A[j]<<' ';cout<<'\n';
        swap(A[i],A[N-i-1]);
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/