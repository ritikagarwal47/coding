#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    if(N<7)
    {
        cout<<"NO";return;
    }
    ll i=0,c=0;
    bool f=true;

    for(ll i=0;i<N;++i)
    {
        if(s[i]=='1' and f)++c;
        else if(s[i]=='0' and !f)++c;
        else
        {
            f= !f;
            c=0;
        }
        if(c==6)
        {
            cout<<"YES";return;
        }
    }
    cout<<"NO";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/