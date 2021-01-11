#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll sa=0,sb=0;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],sa+=A[i];
    ll B[M]; for(ll i=0;i<M;++i)cin>>B[i],sb+=B[i];
    sort(A,A+N); sort(B,B+M,greater<ll>());
    ll i=0,j=0;
    ll ans=0;
    if(sa>sb)
    {
        cout<< ans <<'\n';return;
    }
    while(i<N and j<M)
    {
        
        ++ans;
        sa = sa - A[i] + B[j];
        sb = sb + A[i] - B[j];
        swap(A[i],B[j]);++i,++j;
        if(sa>sb)
        {
            cout<< ans <<'\n';return;
        }
    }
    cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/