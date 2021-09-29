#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    ll ans=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1')
        {
            if(i>=K and s[i-K]=='1'){}
            else if((i+K)<N and s[i+K]=='1'){}
            else 
            {
                ++ans;
                if((i+K)<N)s[i+K] ='1';
            }
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/