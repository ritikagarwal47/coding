#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N<10)cout<<N<<'\n';
    else
    {
        ll ans=0;
        ll a=N,c=1;
        while(N>9)
        {
            ans+=9;
            N/=10;c*=10;
        }
        ans+=N;
        c/=10;
        //cout<<N<<' '<<a%10<<' '<<c<<'\n';
        if(N>a%10)--ans;
        cout<<ans<<'\n';
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/