#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll o=0,z=0,x=0;
    //vector<ll> V;
    for(ll i=0;i<N;++i)
    {
        string s;cin>>s;
        //V.push_back(s.size());
        if(s.size()&1)++x;
        for(ll j=0;s[j];++j)
        {
            if(s[j]=='1')++o;
            else z++;
        }
    }  
    //cout<<z<<' '<<o<<'\n';
    if(z&1 and o&1 and x==0)cout<<N-1<<'\n';
    else cout<<N<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/