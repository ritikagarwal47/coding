#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K,S;cin>>N>>K>>S;
    if(S>((N-1)*K) or K>S)
    {
        cout<<"NO";return;
    }  
    cout<<"YES\n";
    ll p = S/K;//cout<<p<<'\n';
    ll c=1;//0;
    for(ll i=0;i<K;++i)
    {
        //cout<<p<<'\n';
        ll x = min(N-1,S-(K-i-1));
        //cout<<x<<<'\n';
        if((c-x)>0)c-=x;
        else c+=x;
        //cout<<s<<'\n';
        S-=x;//c;//x;
        cout<<c<<' ';//cout<<p<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/