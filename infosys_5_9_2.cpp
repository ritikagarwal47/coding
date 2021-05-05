#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    string s1=s;
    ll K;cin>>K;
    ll a=0,b=0;
    ll N = s.size();
    for(ll i=0;i<N-K;++i)
    {
        if(s[i]!=s[i+K])
        {
            s[i+K]=s[i];++a;
        }
    }
    for(ll i=N-1;i>=K;--i)
    {
        if(s1[i]!=s1[i-K])
        {
            s1[i-K] = s1[i];++b; 
        }
    }
    //cout<<a<<' '<<b<<'\n';
    cout<<min(a,b)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/