#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    vector<ll> V;
    V.push_back(a);V.push_back(b);V.push_back(c);
    sort(V.begin(),V.end());
    if((V[0]+V[1] )> V[2])
    {
        cout<<"YES ";
        long double s =(a+b+c)/2;
        long double ans = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<fixed<<setprecision(5)<<ans<<'\n';
    }
    else cout<<"NO\n";
}

int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/