#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll a=0,b=0;
    bool ok=true, f=true;
    for(ll i=31;i>=0;--i)
    {
        if((N&(1<<i))==0 and f)continue;
        else f=0;
        //cout<<a<<' '<<b<<' '<<i<<'\n';
        if((N&(1<<i))==0)
        {
            a += (1<<i) ;
            b += (1<<i) ;
        }
        else 
        {
            if(ok)
            {
                a += (1<<i);
                ok=false;
            }
            else
            {
                b += (1<<i);
            }
        }
    }
    //cout<<a<<' '<<b<<'\n';
    cout<< (a*b) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/