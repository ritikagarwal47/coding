#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll a=0,b=0;
    bool ok1=false,ok2=false;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        a+=x;b+=y;
        if(x&1 and y%2==0)ok2=true;
        if(x%2==0 and y&1)ok1=true;
    }
    //cout<< a<<' '<< b<<'\n';
    //cout<<ok1<<' '<<ok2<<'\n';
    if(a%2==0 and b%2==0)cout<<"0\n";
    else if(N==1)cout<<"-1\n";
    else if(a&1 and b&1 and(ok1 or ok2))cout<<"1\n";
    
    //else if(a%2==0 and b&1 and ok1)cout<<"1\n";
    //else if(a&1 and b%2==0 and ok2)cout<<"1\n";
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/