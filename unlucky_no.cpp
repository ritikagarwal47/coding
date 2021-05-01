#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N==1)cout<<"1\n";
    else if(N==2)cout<<"3";
    else
    {
        ll p = pow(2,(ll)log2(N+1));
        --p;
        ll a = p,c=0;
        while(a>0)++c,a>>=1;
        //cout<<a<<' '<<c<<'\n';
        //cout<<p<<'\n';
        ll d = N - p;
        for(ll i=c-1;i>=0;--i)
        {
            if(d&(1<<i))cout<<"3";
            else cout<<"1";
        }
    }   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/