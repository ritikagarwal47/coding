#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    //map<char,ll> M;
    //M['P']=M['R']=M['Q']=M['S']=M['T']=0;
    
    ll ans=0;char ch;
    ll c=0;char curr='a';
    for(ll i=0;s[i];++i)
    {
        if(s[i]!=curr)
        {
            if(ans<c)
            {
                ans=c;
                ch=curr;
            }
            c=1;curr=s[i];
        }
        else ++c;
    }
    if(ans<c)
    {
        ans=c;ch=curr;
    }
    cout<<ans<<' '<<ch<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/