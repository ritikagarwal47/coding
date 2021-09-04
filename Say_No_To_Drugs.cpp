#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K,L;cin>>N>>K>>L;--N;
    if(N==0)
    {
         ll p ;cin>>p;
         cout<<"Yes\n";return;
    }
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll p ;cin>>p;
    sort(A,A+N,greater<ll>());
    ll mx = A[0];
    ll c=0;
    if(K>0)
    {
        c = (L-1)*K;
        //c*=K;
    }
    cout<< ((p+c)>mx?"Yes":"No")<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/