#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll X,Y;cin>>X>>Y;
    // if(Y%X)
    // {
    //     cout<<"-1\n";return;
    // } 
    ll ans=0;
    ll s=0;
    while(s<=Y)
    {
        ll c=X;bool ok=false;
        while(1)
        {
            if((c+s)<=Y)s+=c,++ans,ok=true;
            else break;
            c *=2;
            //cout<<c<<' '<<s<<'\n';
        }
        //cout<<ans<<'\n';
        if(s==Y)
        {
            cout<<ans<<'\n';return;
        }
        if(!ok)break;
        ++ans;
    }
    if(s==Y)
    {
        cout<<ans<<'\n';return;
    }
    cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/