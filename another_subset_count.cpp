#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
#define MAXN 32
ll spf[MAXN];
vector<ll> adj[32];
void seive()
{
    spf[1] = 1;
    for(ll i=2;i<MAXN; i++)spf[i] = i;
    for(ll i=4; i<MAXN; i+=2)spf[i] = 2;
    for (ll i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (ll j=i*i; j<MAXN; j+=i)
            {
                if (spf[j]==j)spf[j] = i;
            }
        }
    }
}
vector<ll> getFactorization(ll x)
{
    vector<ll> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
void pre()
{
    seive();
    for(ll i=1;i<=30;++i)
    {
        //cout<<i<<"-> ";
        for(ll i=1;i<=30;++i)
        {
            if(i==1 or i==4 or i==8 or i==9 or i==12 
            or i==16 or i==18 or i==20 or i==24 or i==25 
                or i==27 or i==28)continue;
            ///else fg[i]=1;
            vector<ll> ans = getFactorization(i);
            // if(i==2 or i==3 or i==5 or i==7 or
            // i==11 or i==13 or i==17 or i==19 
            // or i==23 or i==29)ans.push_back(i);
            adj[i]=ans;
            //for(auto i:ans)cout<<i<<' ';cout<<'\n';
        }
    }
}
map<ll,ll> M;
ll ans=0;
void fun(ll i,vector<ll> &V,bool *vis,ll N,vector<ll> &p)
{
    if(i==N)return;
    bool ok=true;
    vector<ll> as = adj[V[i]];
    for(auto i:as)
    {
        if(vis[i])
        {
            ok=false;
            break;
        }
    }
    if(as.size()==0)ok=false;
    if(ok)
    {
        for(auto i:as)
        {
            vis[i]=true;
        }
        ll c=1;
        for(ll i=0;i<p.size();++i)
        {
            c*=M[p[i]];
            c%=mod;
        }
        ans += c;
        ans %= mod;
        p.push_back(V[i]);
        fun(i+1,V,vis,N,p);
        for(auto i:as)
        {
            vis[i]=false;
        }
        p.pop_back();
    }
    fun(i+1,V,vis,N,p);
}
void solve()
{
    ll N;cin>>N;
    ll A[N];
    set<ll> st;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        ++M[A[i]];
        st.insert(A[i]);
    }
    bool vis[32]={0};
    vector<ll> V;
    for(auto i:st)
    {
        V.push_back(i);
    }
    // for(ll k=1;k<=30;++k)
    // {
    //     //cout<<k<<' ';
    //     for(auto i:adj[k])cout<<i<<' ';cout<<'\n';
    // }
    vector<ll> p;
    fun(0,V,vis,V.size(),p);
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}