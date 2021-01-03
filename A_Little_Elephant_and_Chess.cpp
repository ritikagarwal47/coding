#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    for(ll i=0;i<8;++i)
    {
        string s;cin>>s;
        bool ok;
        if(s[0]=='W')ok=true;
        else ok=false;
        for(ll j=0;s[j];++j)
        {
            if(ok and s[j]=='W')ok=!ok;
            else if(!ok and s[j]=='B')ok=!ok;
            else
            {
                cout<<"NO\n";return;
            }            
        }
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/