#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool prime[86028121 +5];
vector <int> p;
void pre()
{
    for(ll i=2;i<=86028121 ;++i)prime[i]=1;
    for(ll i=2;i*i<=86028121 ;++i)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<=86028121 ;j+=i)
                prime[j]=0;
        }
    }
    for(ll i=2;i<=86028121 ;++i)
        if(prime[i])
            p.push_back(i);
}
void solve()
{
    ll N;cin>>N;
    cout<< p[N-1] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/