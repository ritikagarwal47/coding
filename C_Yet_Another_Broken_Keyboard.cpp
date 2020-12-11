#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    vector<char> V;char x;
    for(ll i=0;i<K;++i)cin>>x,V.push_back(x);
    ll ans=0,c=0;
    for(ll i=0;s[i];++i)
    {
        bool f=false;
        for(ll j=0;j<K;++j)
        {
            if(s[i]==V[j])
            {
                ++c,f=true;
                break;
            }
        }
        if(!f)
        {
            ans += c*(c+1)/2;
            c=0;
        }
    }
    ans += c*(c+1)/2;
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/