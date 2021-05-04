#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll s=0;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];
    sort(A,A+N);
    ll s1=0,s2=0;
    for(ll i=0;i<N;++i)
    {
        if(i&1)s1+=A[i];
        else s2+=A[i];
    }
    cout<< min(s1,s2)*2 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/