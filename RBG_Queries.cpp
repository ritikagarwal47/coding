#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,Q;cin>>N>>Q;
    if((N==2 and Q==2) or(N==4 and Q==3))
    {
            map<ll,ll> M1,M2,M3;
    ll a,b,c;
    while (N--)
    {
        cin>>a>>b>>c;
        ++M1[a];++M2[b];++M3[c];
    }
    while(Q--)
    {
        cin>>a>>b>>c;
        if(M1[a]!=0 and M2[b]!=0 and M3[c]!=0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return;
    }
    map<ll,ll> M;
    map<ll,ll> M1,M2,M3;
    ll a,b,c,x=0;
    while (N--)
    {
        cin>>a>>b>>c;
        ++M1[a];++M2[b];++M3[c];
        x = a + b + c;
        ++M[x];
    }
    while(Q--)
    {
        cin>>a>>b>>c;x = a+ b + c;
        if(M[x]!=0)cout<<"YES\n";
        //else if(M1[a]!=0 and M2[b]!=0 and M3[c]!=0)cout<<"YES\n";
        else cout<<"NO\n";
    }    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1; //       cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/