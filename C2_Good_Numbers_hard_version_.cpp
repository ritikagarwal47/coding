#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll> V;
// set<ll> st;
// void fun(ll curr,vector<ll> &V,ll i,ll N)
// {
//     if(i==N)return;
//     if(curr>=1350851717672992089)return;
//     fun(curr+V[i],V,i+1,N);fun(curr,V,i+1,N);
// }
void pre()
{
    //vector<ll> V;
    ll a=1;V.push_back(1);
    while(a!=1350851717672992089)
    {
        a*=3;
        V.push_back(a);        
    }
    //fun(0,V,0,V.size());
    //for(auto i : st)ans.push_back(i);
}
void solve()
{
    ll N;cin>>N;
    ll a = lower_bound(V.begin(),V.end(),N) - V.begin();
    vector<ll> A;
    ll d=0;
    for(ll i=a;i>=0;--i)
    {
        d += V[i];
        if(d>=N)
        {
            A.push_back(d);
            d-=V[i];
        }
    }
    sort(A.begin(),A.end());
    ll p = lower_bound(A.begin(),A.end(),N) - A.begin();
    //ll a = lower_bound(ans.begin(),ans.end(),N) - ans.begin();
    cout<< A[p] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/