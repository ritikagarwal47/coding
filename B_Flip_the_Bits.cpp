#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string a,b;cin>>a>>b;
    vector<pair<ll,ll>> V(N);
    if(a[0]=='0')V[0].first = 1;
    if(a[0]=='1')V[0].second =1;
    for(ll i=1;a[i];++i)
    {
        if(a[i]=='0')
        {
            V[i].first = V[i-1].first + 1;
            V[i].second = V[i-1].second;
        }
        if(a[i]=='1')
        {
            V[i].first = V[i-1].first;
            V[i].second = V[i-1].second + 1;
        }
    } 
    bool ok = true;
    for(ll i=N-1;i>=0;--i)
    {
        if(a[i]==b[i] and ok )continue;
        else if(a[i]!=b[i] and !ok)continue;
        else
        {
            if(V[i].first!=V[i].second)
            {
                cout<<"NO\n";return;
            }
            else ok= !ok;
        }
    } 
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/