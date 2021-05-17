#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    string s1,s2;cin>>s1>>s2;
    if(N<M)
    {
        cout<<"0\n";return;
    }  
    map<char,ll> M1,M2;
    ll ans=0;
    for(ll i=0;i<M;++i)++M1[s1[i]];
    for(ll i=0;i<M;++i)++M2[s2[i]];
    bool ok=true;
    for(char i='a';i<='z';++i)
    {
        if(M1[i]!=M2[i])
        {
            ok=false;break;
        }
    }
    if(ok)++ans;
    for(ll i=M;i<N;++i)
    {
        --M1[s1[i-M]];++M1[s1[i]];
        // for(auto i:M1)cout<<i.first<<' '<<i.second<<'\n';
        // for(auto i:M2)cout<<i.first<<' '<<i.second<<'\n';
        bool ok=true;
        for(char i='a';i<='z';++i)
        {
            if(M1[i]!=M2[i])
            {
                ok=false;break;
            }
        }
        if(ok)++ans;
    }
    cout<<ans<<'\n';
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/