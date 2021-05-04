#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    // if(N==2)
    // {
    //     cout<<"0\n";return;
    // }
    ll ans=0,c=0;
    for(ll i=0;i<N;++i)
    {
        if((s[i%N]=='<' and s[(i+1)%N]=='>') or (s[i%N]=='>' and s[(i+1)%N]=='<'))
        {}//cout<<s[i%N]<<' '<<s[(i+1)%N]<<'\n';}
        else ans++;
        // cout<<s[i%N]<<' '<<s[(i+1)%N]<<'\n';
        if(s[i]=='-' and  )
        {
            c+=2;i++;
        }
    }
    if(c==0)cout<< ans<<'\n';
    else if(c==N)cout<< c<<'\n';
    else cout<< c+1 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/