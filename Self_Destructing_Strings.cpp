#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    if(N&1)
    {
        cout<<"-1\n";return;
    }
    ll ans=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1')++ans;
    }
    if(ans==N or ans==0)cout<<"-1\n";
    else cout<< abs(N/2 - ans) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/