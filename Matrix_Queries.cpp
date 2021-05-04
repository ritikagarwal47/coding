#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll R,C;cin>>R>>C;
    ll A[R][C];
    for(ll i=0;i<R;++i)
        for(ll j=0;j<C;++j)cin>>A[i][j];

    ll Q;cin>>Q;
    while(Q--)
    {
        char p;cin>>p;
        if(p=='a')
        {
            ll x,y,a;cin>>x>>y>>a;
            A[x-1][y-1] =a;
        }
        else
        {
            ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
            ll s=0;
            for(ll i=x1-1;i<x2;++i)
            {
                for(ll j=y1-1;j<y2;++j)
                {
                    s+=A[i][j];
                }
            }
            cout<<s<<'\n';
        }   
    }   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/