#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    cout<<s<<'\n';
    ll N = s.size();
    if(s=="8")cout<<"Yes";
    else
    {
        ll c=0;
        for(ll i=0;s[i];++i)
        {
            if((s[i]-'0')&1)++c;
        }
        if(c==N)
        {
            cout<<"No";return;
        }
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/