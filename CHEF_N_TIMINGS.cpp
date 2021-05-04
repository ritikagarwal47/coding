#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll> V;
void printWellOrdered(ll number,ll x, ll k) 
{ 
    if (k == 0) 
    { 
        V.push_back(number);
        return; 
    } 
    for (ll i = x; i < 10; i++) 
    {
        printWellOrdered(number * 10 + i, i, k - 1); 
    }
} 
void solve()
{
    V.clear();
    ll N;cin>>N;
    ll K=0;
    ll a=N;
    while(a>0)
    {
        K++;a = a/10;
    }
    //cout<<K<<'\n';
    printWellOrdered(0,1,K);
    //for(ll i=0;i<V.size();++i){cout<<V[i]<<' ';}
    ll  p = lower_bound(V.begin(),V.end(),N) - V.begin();
    if(p==0)
    {
        //cout<<"00\n";
        V.clear();
        printWellOrdered(0,1,K-1);
        cout<< V[V.size()-1]<<'\n';

    } 
    else
    {
    if(V[p]==N)cout<<N<<'\n';
    else cout<<V[p-1]<<'\n';
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/