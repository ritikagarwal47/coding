#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s,t;cin>>s>>t;
    map<char,ll> M1,M2;
    for(auto i :s)++M1[i];
    for(auto i :t)++M2[i];
    ll ans=0;
    for(char i='a';i<='z';++i)
    {
        ans+= abs(M1[i] - M2[i]);
    }
    //cout<<ans<<'\n';
    if(ans<=2)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
