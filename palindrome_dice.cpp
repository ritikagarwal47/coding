#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll power(ll x, ll y)  
{  
    ll res = 1;
    x = x%mod;
    while (y > 0)  
    {    
        if (y & 1)  
            res = (res*x)%mod;    
        y = y>>1;  
        x = (x*x)%mod;  
    }  
    return res;  
}
ll fun(ll A)
{
	//cout<<A<<endl;
    return power(A,mod-2);
}
void solve()
{
    ll N;cin>>N;
    ll a = pow(6,(N+1)/2);
    ll b = pow(6,N);
    //cout<<a<<' '<<b<<'\n';
    cout<< a*fun(b)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/