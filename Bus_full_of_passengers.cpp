#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,S,K;cin>>N>>S>>K;
    map<ll,ll> M;
    ll c=0;
    bool ok=true;
    while(K--)
    {
        char a;ll p;cin>>a>>p;
        if(a=='+')
        {
            ++c;
            M[p]++;
        }
        else
        {
            --c;
            if(M[p]==0)ok=false;
            else M[p]--;
        }
        if(c>S)ok=false;
    }   
    cout<< (ok?"Consistent":"Inconsistent")<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/