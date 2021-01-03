#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    map<char,ll> M;
    for(ll i=0;s[i];++i)
    {
        ++M[s[i]];
    }
    ll o=0;

    for(auto i:M)
    {
        if(i.second&1)++o;
    }
    if(o==0 or o&1)cout<<"First";
    else cout<<"Second";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/