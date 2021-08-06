#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool prime[1000000+5];
long ans[1000000+5];
void seive()
{
    prime[0]=prime[1]=true;
    for(ll i=2;i*i<=1000001;++i)
    {
        if(!prime[i])
        {
            for(ll j=i*i;j<=1000001;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    ll c=0;
    for(ll i=1;i<=1000001;++i)
    {
        if(!prime[i])++c;
        if(!prime[c])ans[i] = ans[i-1]+1;
        else ans[i]=ans[i-1];
        //cout<<ans[i]<<' '<<prime[i]<<' '<<c<<'\n';
    }
}
void solve()
{
    ll l,r; cin>>l>>r;
    ll p = ans[r] - ans[l];
    //cout<<ans[l]<<' '<<ans[r]<<'\n';
    cout << p <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
seive();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/