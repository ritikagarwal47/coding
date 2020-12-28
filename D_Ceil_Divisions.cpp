#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    //ll l = log(99);
    //cout<<l<<'\n';
    vector<pair<ll,ll>> V;
    // if(N<=10)
    // {
        ll a=N;
        for(ll i=N-1;i>=3;--i)
        {
            if(((a-1)/i + 1)>i)
            {
                V.push_back({N,i});
                a = (a-1)/i + 1;
            }
            V.push_back({i,N});
        }
        //a=N;
        while(a!=1)
        {
            V.push_back({N,2});
            a = (a-1)/2 + 1;
        }
    // }
    // else{
        
    // for(ll i=N-1;i>=3;--i)
    // {
    //     if(i!=10 or i!=100 or i!=1000 or i!=10000 or i!=100000)V.push_back({i,N});
    // }
    
    // }
    cout<<V.size()<<'\n';
    for(ll i=0;i<V.size();++i)
    {
        cout<<V[i].first<<' '<<V[i].second<<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/