#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    char A[N+1][M+1];
    for(ll i=1;i<=N;++i)
    for(ll j=1;j<=M;++j)
    cin>>A[i][j];

    vector<ll> ans;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=1;j<=M;++j)
        {
            if(A[i][j]=='0')continue;
            ll x=1,y=1;
            if(i==N)x=-1;
            if(j==M)y=-1;
            ans.push_back(i);
            ans.push_back(j);
            ans.push_back(i+x);
            ans.push_back(j);
            ans.push_back(i);
            ans.push_back(j+y);
            ans.push_back(i+x);
            ans.push_back(j+y);
            ans.push_back(i);
            ans.push_back(j+y);
            ans.push_back(i);
            ans.push_back(j);
            ans.push_back(i);
            ans.push_back(j);
            ans.push_back(i+x);
            ans.push_back(j);
            ans.push_back(i+x);
            ans.push_back(j+y);
        }
    }
    cout<< ans.size() /6 <<'\n';
    for(ll i=0;i<ans.size();i+=6)
    {
        cout<< ans[i]<<' '<< ans[i+1] <<' '<< ans[i+2]<<' '<< ans[i+3]<< ' '<< ans[i+4]<<' '<< ans[i+5]<< '\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/