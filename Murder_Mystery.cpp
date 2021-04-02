#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string a,b;cin>>a>>b;
    map<ll,ll> ma,mb;
    for(ll i=0;a[i];++i)++ma[a[i]];  
    for(ll i=0;b[i];++i)++mb[b[i]]; 
    for(auto i : ma)
    {
        if(i.second>mb[i.first])
        {
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/