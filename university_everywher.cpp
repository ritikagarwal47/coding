#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> ans;
void pre(ll n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i = p * p; i <= n; i += p)prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if(prime[p])ans.push_back(p);
}
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    set<ll> st;
    for(ll i=0;i<N;++i)
    {
        ll c=0;
        for(ll j=i;j<N;++j)
        {
           c = c*10 + (s[j] - '0');
           st.insert(c); 
        }
    } 
    //for(auto i:st)cout<<i<<' ';cout<<'\n';
    ll p=0;
    ll res=0;
    set<ll>::reverse_iterator i;
    for (i = st.rbegin(); i != st.rend();++i)
    {
        ll a = *i;
        if(binary_search(ans.begin(),ans.end(),a))
        {
            res+= a;++p;
        }
        if(p==10)break;
    }
    cout<<res<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);pre(1000000);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/