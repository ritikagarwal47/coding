#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    map<char,ll> M;
    string curr="";
    ++M[s[0]];
    for(ll i=1;i<N;++i)
    {
        if(s[i]!=s[i-1] and M[s[i]]>0)
        {
            cout<<"NO\n";return;
        }
        ++M[s[i]];
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/