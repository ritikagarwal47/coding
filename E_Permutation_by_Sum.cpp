#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,l,r,S;cin >>N>>l>>r>>S;
    ll p = r - l + 1;
    set<ll> st;ll a = N;
    bool ok=true;
    for (ll i=l;i<=r;++i)
    {
        ll rem = (p*(p-1))/2;
        while ((S-a)<rem)--a;

        if (!a)
        {
            ok= false;break;
        }
        st.insert(a);
        S -= a;--p,--a;
    }
    if (S)ok=false;
    if (!ok) 
    {
        cout<<"-1\n";return;
    }
    vector<ll> ans;
    for (ll i=1;i<=N;++i)
    {
        if (st.find(i) == st.end())ans.push_back(i);
    }
    a=0;
    auto it = st.begin();
    for (ll i=1;i<=N;++i)
    {
        if (i >= l && i <= r)cout<<*it<<' ',++it;
        else cout<<ans[a++]<<' ';
    }
    cout<<'\n';    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/