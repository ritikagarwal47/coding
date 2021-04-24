#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s1,s2;cin>>s1>>s2;
    vector<ll> V;
    for(ll i=0;i<N;++i)
    {
        ll p=-1;
        for(ll j=i;j<N;++j)
        {
            if(s2[i]==s1[j])
            {
                p=j;break;
            }

        }
        if(p==-1)
        {
            cout<<"-1";return;
        }
        for(ll j=p-1;j>=i;--j)
        {
            swap(s1[j],s1[j+1]);
            V.push_back(j+1);
        }
        //cout<<s1<<'\n';cout<<V.size()<<'\n';
    }
    cout<<V.size()<<'\n';
    for(auto i:V)cout<<i<<' ';cout<<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/