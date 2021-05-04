#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;   
    string s[N];
    for(ll i=0;i<N;++i)cin>>s[i];
    ll i1=0,j1=0,i2=0,j2=0,x=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(s[i][j]=='*')
            {
                if(!x)i1=i,j1=j,x=1;
                else i2=i,j2=j;
            }
        }
    }
    //cout<<i1<<' '<<j1<<'\n';
    //cout<<i2<<' '<<j2<<'\n';
    if(j1==j2)
    {
        if(j1>=1)
        {
            s[i1][j1-1]=s[i2][j2-1]='*';
        }
        else
        {
            s[i1][j1+1]=s[i2][j2+1]='*';
        }
    }
    else if(i1==i2)
    {
        if(i1>=1)
        {
            s[i1-1][j1]=s[i2-1][j2]='*';
        }
        else
        {
            s[i1+1][j1]=s[i2+1][j2]='*';
        }
    }
    else
    {
        s[i1][j2]=s[i2][j1]='*';
    }
    for(ll i=0;i<N;++i)cout<<s[i]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/