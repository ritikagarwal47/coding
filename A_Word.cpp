#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll l=0,u=0;
    for(ll i=0;s[i];++i)
    {
        if(isupper(s[i]))++u;
        else ++l;
    }
    if(l>=u)transform(s.begin(),s.end(),s.begin(),::tolower);
    else transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/