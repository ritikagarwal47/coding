#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool cmp(pair<int,int> a,pair<int,int> b)
{
  return abs(a.first)+abs(a.second)<abs(b.first)+abs(b.second);
}
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> V;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;V.push_back({x,y});
    } 
    sort(V.begin(),V.end(),cmp); 
    ll c=0;
    vector<string> adj[6*N];
    for(ll i=0;i<V.size();++i)
    {
        ll x = V[i].first;
        ll y = V[i].second;
        bool ok=false;
        if(x)
        {
            if(x>0)
            {
                adj[c].push_back("1");
                adj[c].push_back(to_string(abs(x)));
                adj[c].push_back("R");
            }
            else
            {
                adj[c].push_back("1");
                adj[c].push_back(to_string(abs(x)));
                adj[c].push_back("L");
            }
            ok=true;++c;
        }
        if(y)
        {
            if(y>0)
            {
                adj[c].push_back("1");
                adj[c].push_back((to_string(abs(y))));
                adj[c].push_back("U");
            }
            else
            {
                adj[c].push_back("1");
                adj[c].push_back((to_string(abs(y))));
                adj[c].push_back("D");
            }
            ok=true;++c;
        }
        if(ok)adj[c].push_back("2"),++c;
        if(x)
        {
            if(x>0)
            {
                adj[c].push_back("1");
                adj[c].push_back(to_string(abs(x)));
                adj[c].push_back("L");
                
            }
            else
            {
                adj[c].push_back("1");
                adj[c].push_back(to_string(abs(x)));
                adj[c].push_back("R");
            }
            ++c;
        }
        if(y)
        {
            if(y>0)
            {
                adj[c].push_back("1");
                adj[c].push_back((to_string(abs(y))));
                adj[c].push_back("D");
                
            }
            else
            {
                adj[c].push_back("1");
                adj[c].push_back((to_string(abs(y))));
                adj[c].push_back("U");
            }
            ++c;
        }
        if(ok)adj[c].push_back("3"),++c;
    }
    cout<<c<<'\n';
    for(ll i=0;i<c;++i)
    {
        for(auto j :adj[i])
        {
            cout<<j<<' ';
        }
        cout<<'\n';
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/