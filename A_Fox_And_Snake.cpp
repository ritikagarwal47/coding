#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    bool ok=true;
    for(ll i=0;i<N;++i)
    {
        if(i%2==0)
        {
            for(ll j=0;j<M;++j)cout<<"#";
        }
        else
        {
            if(ok)
            {
                for(ll j=0;j<M;++j)
                {
                    if(j==M-1)cout<<"#";
                    else cout<<".";
                }
            }
            else
            {
                for(ll j=0;j<M;++j)
                {
                    if(j==0)cout<<"#";
                    else cout<<".";
                }
            }
            ok = !ok;
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/