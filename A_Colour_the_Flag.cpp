#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    string A[N];for(ll i=0;i<N;++i)cin>>A[i];
    vector<pair<ll,ll>> W,R;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if(A[i][j]=='R')R.push_back({i,j});
            else if(A[i][j]=='W')W.push_back({i,j});
        }
    }  
    bool ok=true;
    for(auto i:R)
    {
        if(i.first%2==0 and i.second%2==0){}
        else if(i.first&1 and i.second&1){}
        else ok=false;
    }
    for(auto i:W)
    {
        if(i.first%2==0 and i.second&1){}
        else if(i.first&1 and i.second%2==0){}
        else ok=false;
    }
    if(ok)
    {
        cout<<"YES\n";
        for(ll i=0;i<N;++i)
        {
            for(ll j=0;j<M;++j)
            {
                if(i%2==0 and j%2==0)cout<<"R";
                else if(i&1 and j&1)cout<<"R";
                else cout<<"W";
            }
            cout<<'\n';
        }
        return;
    }
    ok=true;
    for(auto i:W)
    {
        if(i.first%2==0 and i.second%2==0){}
        else if(i.first&1 and i.second&1){}
        else ok=false;
    }
    for(auto i:R)
    {
        if(i.first%2==0 and i.second&1){}
        else if(i.first&1 and i.second%2==0){}
        else ok=false;
    }
    if(ok)
    {
        cout<<"YES\n";
        for(ll i=0;i<N;++i)
        {
            for(ll j=0;j<M;++j)
            {
                if(i%2==0 and j%2==0)cout<<"W";
                else if(i&1 and j&1)cout<<"W";
                else cout<<"R";
            }
            cout<<'\n';
        }
        return;
    }
    cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/