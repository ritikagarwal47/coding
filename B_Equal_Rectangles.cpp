#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    vector<ll> V;
    map<ll,ll> M;
    ll a,b,c,d;
    for(ll i=0;i<N;++i)
    {
        cin>>a>>b>>c>>d;
        //++M[a],++M[b],++M[c],++M[d];
        V.push_back(a);
        V.push_back(b);
        V.push_back(c);
        V.push_back(d);
    }  
    sort(V.begin(),V.end());
    ll area = V[0]*V[V.size() - 1];
    // for(auto i :M)
    // {
    //     if(i.second&1)
    //     {
    //         cout<<"NO\n";return;
    //     }
    //     for(ll j=0;j<i.second/2;++j)
    //     {
    //         V.push_back(i.first);
    //     }
    // }
    // if(M.size()<=2)
    // {
    //     cout<<"YES\n";return;
    // }
    for(ll i=0;i<N;++i)
    {
        ll p = 2*i;
        if(V[p]!=V[p+1] or V[p]*V[4*N - p - 1]!=area or V[4*N - p -1]!=V[4*N- p - 2])
        {
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/