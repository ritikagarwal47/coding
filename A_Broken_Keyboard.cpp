#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    map<char,ll> M;
    for(ll i=0;i<N;++i)
    {
        ll j = i;
        while(j<N and s[i]==s[j+1])++j;
        if((j-i)%2==0)
        {
            M[s[i]]=1;
        }
        i=j;
    }
    for(auto i : M)cout<<i.first;cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/