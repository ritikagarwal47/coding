#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N1,N2,N3;cin>>N1>>N2>>N3;
    ll sa=0,sb=0,sc=0;
    ll A[N1];for(ll i=0;i<N1;++i)cin>>A[i],sa+=A[i];
    ll B[N2];for(ll i=0;i<N2;++i)cin>>B[i],sb+=B[i];
    ll C[N3];for(ll i=0;i<N3;++i)cin>>C[i],sc+=C[i];
    ll i=0,j=0,k=0;
    while(!(sa==sb and sb==sc))
    {
        while(sa>sb or sa>sc)sa-=A[i++];
        while(sb>sa or sb>sc)sb-=B[j++];
        while(sc>sb or sc>sa)sc-=C[k++];
    }
    cout<< sa <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/