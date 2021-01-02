#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    string s;
    map<ll,ll> R,C;
    for(ll i=0;i<N;++i)
    {
        cin>>s;
        bool ok = false;
        for(ll j=0;s[j];++j)
        {
            if(s[j]=='S')
            {
                ok=true;
                R[j]=1;
            }
        }
        if(ok)C[i]=1;
    }
    ll a=0,b=0;
    for(ll i=0;i<M;++i)
        if(R[i]==1)++a;//,cout<<i<<'\n';
    for(ll i=0;i<N;++i)
        if(C[i]==1)++b;//,cout<<i<<'\n';
    //cout<< a <<' '<<b <<'\n';
    //cout<< b*N + a*M - a <<'\n';
    //cout<< a*M + b*N - b <<'\n';
    cout<< (N*M - a*b ) <<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/