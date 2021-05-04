#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll A[1000000 + 5];
bool fucking_prime(ll N)
{
    if(N<2)return false;
    for(ll i=2;i*i<=N;++i)
    {
        if(N%i==0)return false;
    }
    return true;
}
void pre()
{
    ll ans=0;
    for(ll i=0;i<=1000000;++i)
    {
        if(fucking_prime(i))++ans;
        A[i] = ans;
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    if(A[N]<=M)cout<<"Chef\n";
    else cout<<"Divyam\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}