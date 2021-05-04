#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void randomize (ll arr[], ll n)  
{  
    srand (time(NULL));  
    for (int i = n - 1; i > 0; i--)  
    {  
        int j = rand() % (i + 1);  
        swap(arr[i], arr[j]);  
    }  
}
void solve()
{
    ll N,M;cin>>N>>M;
    for(ll i=0;i<M;++i)
    {
        ll u,v;cin>>u>>v;
    }
    for(ll i=0;i<M;++i)
    {
        ll u,v;cin>>u>>v;
    }   
    ll A[N];
    for(ll i=0;i<N;++i)A[i] = i+1;
    randomize (A, N);  
    for(ll i=0;i<N;++i)cout<<A[i]<<' ';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/