#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N],x;
    ll a=0,b=0,c=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;x%=3;
        if(x==0)++a;
        if(x==1)++b;
        if(x==2)++c;
    } 
    ll ans=a;
    if(b==c)
    {
        cout<< a + b <<'\n';return;
    }
    if(b>c)
    {
        ans+=c;
        b-=c;
        ans+=b/3;
    }
    else
    {
        ans+=b;
        c-=b;
        ans+=c/3;
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/