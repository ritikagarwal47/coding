#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll>  primeFactors(ll n)  
{  
    vector<ll> V;
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";  
        V.push_back(2);
        n = n/2;  
    }  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            V.push_back(i);
            n = n/i;  
        }  
    }  
    if (n > 2)  
        V.push_back(n);  
    return V;
}  
void solve()
{
    ll N;cin>>N;
    vector<ll> V = primeFactors(N);
    map<ll,ll> M;
    for(ll i=0;i<V.size();++i)
    {
        M[V[i]]++;
    }
    ll mx=0,a=0;
    for(auto i : M)
    {
        if(i.second>a)
        {
            a = i.second;
            mx = i.first;
        }
    }
    vector<ll> ans;
    ll p = 1;
    for(ll i=0;i<V.size();++i)
    {
        if(V[i]!=mx)
        {
            p*=V[i];
        }

    }
    cout<< a <<'\n';
    for(ll i=0;i<a-1;++i)cout<<mx << ' ';
    cout<< p*mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/