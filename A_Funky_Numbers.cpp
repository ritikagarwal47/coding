#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    //cout<< ceil(sqrt(mod)) <<'\n'; 
    vector<ll> V;
    for(ll j=1;j<=100000;++j)V.push_back(j*(j+1)/2);
    for(ll i=0;i<V.size();++i)
    {
        ll a = N - V[i];
        //cout<<V[i]<<' '<<a<<'\n';
        if(binary_search(V.begin(),V.end(),a))
        {
            cout<<"YES\n";return;
        }
    }
    cout<<"NO";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/