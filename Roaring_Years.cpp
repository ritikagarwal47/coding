#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll ans;
void solve()
{
    ll N;cin>>N;
    map<ll,ll>M;
    for(ll i=1;i<=1000;++i)
    {
        ll p = i;
        ll logo=0;
        ll f=i+1;
        while(p<=N)
        {
            ll res = 1;//pow(10,log10(f) + 1);
            ll a = log10(f) + 1;

            while(a--)res*=10;

            p = p*res + f;
            ++M[p];++f;
        }
    }
    map<ll,ll>::iterator itr;
    //for(auto i:M)cout<<i.first<<' ';cout<<'\n';
    for (itr = M.begin(); itr != M.end(); ++itr) 
    {
        if(N<itr->first)
        {
            ans = itr->first;break;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/