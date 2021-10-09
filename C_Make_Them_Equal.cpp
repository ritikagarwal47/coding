#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;char c;cin>>N>>c;
    string s;cin>>s;
    ll p =-1;bool ok=false;
    for(ll i=N-1;i>=0;--i)
    {
        if(s[i]==c and p==-1)
        {
            p=i+1;
        }
        if(s[i]!=c)ok=true;
    }
    if(!ok)
    {
        cout<<"0\n";return;
    }
    if(2*p>N)
    {
        cout<<"1\n";
        cout<<p<<'\n';
        return;
    }
    cout<<"2\n";
    cout<<N-1<<' '<<N<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/