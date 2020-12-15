#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    set<tuple<ll,ll,ll>> S;
    ll N = s.size();
    for(ll i=0;i<N;++i)
    {
        ll o=0,c=0;
        for(ll j=i;j<N;++j)
        {
            if(s[j]=='1')++o;
            if(o&1)++c;
            S.insert(make_tuple(j-i+1,o,c));
        }
    }
    cout<< S.size()<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/