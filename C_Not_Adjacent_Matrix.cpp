#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N==2)cout<<"-1\n";
    else
    {
        ll x,a=1;
        for(ll i=0;i<N;++i)
        {
            for(ll j=0;j<N;++j)
            {
                if(a<=N*N)
                {
                    x=a;a+=2;
                }
                else
                {
                    x=2;a=4;
                }
                cout<<x<<' ';
             }
            cout<<'\n';
        }
    }  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/