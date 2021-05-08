#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll  A[N],left[N],right[N];
    for(ll i=0;i<N;++i)cin>>A[i],left[i]=right[i]=1;
        
    for(ll i=1;i<N;++i)
    {   
           
        if(A[i]<=A[i-1])left[i]=left[i-1]+1;
    }
    for(ll i=N-2;i>=0;--i)
    {
        if(A[i]<=A[i+1])right[i]=right[i+1]+1;           
    }
    while(Q--)
    {
        ll  l,r;cin>>l>>r;l--;r--;
        (left[r]+right[l]>=r-l+2)?cout<<"Yes\n":cout<<"No\n";
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/