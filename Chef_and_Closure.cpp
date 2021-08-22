#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    bool a=false,b=false,c=false,d=false;
    ll p=0,w=0;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        M[x]++;
        if(x==0)a=true;
        else if(x==1)b=true;
        else if(x==-1)
        {
            c=true;++w;
        }
        else 
        {
            d=true;
            p++;
        }
    }
    if(d)
    {
        if(c or p>1)cout<<"0\n";
        else cout<<"1\n";
    }
    else if(c)
    {
        if(w>1 and b==false)cout<<"0\n";
        else cout<<"1\n";
    }
    //else cout<<"0\n";
    else cout<<"1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/