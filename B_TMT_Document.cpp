#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;

    ll i=0,j=s.size()-1;
    ll t=0,m=0;   
    for(auto i:s)
    {
        if(i=='T')++t;
        else ++m;
    }
    //cout<<t<<' '<<m<<'\n';
    if((2*m)!=(t))
    {
        cout<<"NO\n";return;
    }
    t=0;m=0;
    for(auto i :s)
    {
        //cout<<t<<' '<<m<<'\n';
        if(i=='T')++t;
        else --t;
        if(t<0)
        {
            cout<<"NO\n";return;
        }
    }
    t=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(s[i]=='T')++t;
        else --t;
        if(t<0)
        {
            cout<<"NO\n";return;
        }
    }
    // while(i<=j)
    // {
    //     if(i==j)
    //     {
    //         if(s[i]=='M')++m;
    //         //else ++t;
    //         break;
    //     }
    //     //cout<<t<<' '<<m<<'\n';
    //     if(s[i]=='T' and s[j]=='T')++t,++i,--j;
    //     else if(s[i]=='M' and s[j]=='T')
    //     {
    //         if(t<=m)
    //         {
    //             cout<<"NO\n";return;
    //         }
    //         else
    //         {
    //             ++m;++i;
    //         }
    //     }
    //     else if(s[j]=='M' and s[i]=='T')
    //     {
    //         if(t<=m)
    //         {
    //             cout<<"NO\n";return;
    //         }
    //         else
    //         {
    //             ++m;--j;
    //         }
    //     }
    //     else if(s[i]=='M' and s[j]=='M')
    //     {
    //         if(t<=(m-1))
    //         {
    //             cout<<"NO\n";return;
    //         }
    //         m+=2;i++;--j;
    //     }
    // }

    //cout<<t<<' '<<m<<'\n';
    //if(t==m)
    cout<<"YES\n";
    //else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/