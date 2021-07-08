#include<bits/stdc++.h>
#define ll long long int
#define pp pair<ll,ll> 
using namespace std;
//const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll get_dis(pp p1,pp p2)
{
    ll a = abs(p1.first - p2.first);
    ll b = abs(p1.second - p2.second);
    return ((a * a) + (b * b));
}
bool check(pp p1,pp p2,pp p3,pp p4)
{
  
    ll d2 = get_dis(p1, p2);
    ll d3 = get_dis(p1, p3);
    ll d4 = get_dis(p1, p4);
    if (d2 == d3 and  2 * d2 == d4 and 2 * get_dis(p2, p4) == get_dis(p2, p3))return true;
    if (d3 == d4
        && 2 * d3 == d2
        && 2 * get_dis(p3, p2) == get_dis(p3, p4)) {
        return true;
    }
    if (d2 == d4
        && 2 * d2 == d3
        && 2 * get_dis(p2, p3) == get_dis(p2, p4)) {
        return true;
    }
    return false;
}
void fun(ll N,vector<pair<ll,ll>> &v)
{
    map<pair<ll,ll>,ll> M;
    for(auto i:v)M[i]=1;
    ll ans = 0;
    map<pair<ll, ll>, ll> vis;
    for (ll i= 0; i < N; i++) 
    {
        for (ll j = 0; j < N; j++) 
        {
            if (i == j)continue;
            pp p1 = make_pair(v[i].first,v[j].second);
            pp p2 = make_pair(v[j].first,v[i].second);
            set<pp> s;
            s.insert(v[i]);
            s.insert(v[j]);
            s.insert(p1);
            s.insert(p2);
            if (s.size() != 4)continue;
            if(M.find(p1) != M.end() and M.find(p2) != M.end()) 
            {
                if ((!vis[v[i]] or !vis[v[j]] or !vis[p1] || !vis[p2]) and (check(v[i], v[j], p1, p2))) 
                {
  
                    vis[v[i]] = 1;
                    vis[v[j]] = 1;
                    vis[p1] = 1;
                    vis[p2] = 1;
                    ans++;
                }
            }
        }
    }
    cout << ans<<'\n';
}
void solve()
{
    ll N;cin>>N;ll x, y;
    vector<pair<ll,ll>> V;
    for(ll i=0;i<N;++i)cin>>x>>y,V.push_back({x,y});
    fun(N,V);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/