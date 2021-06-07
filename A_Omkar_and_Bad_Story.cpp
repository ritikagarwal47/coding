#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;vector<ll> ans;map<ll,ll> M;set<ll> st;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],st.insert(A[i]),++M[A[i]];
    bool ok=true;
    for(ll i=0;i<N;++i)
    {
        if(A[i]<0)ok=false;
        for(ll j=i+1;j<N;++j)
        {
            ll p = abs(A[i]-A[j]);
            //cout<<p<<' ';
            //if(M.find(p)==M.end())
            {
                ans.push_back(p);
            }
            //++M[p];
        }
    } 
    while(ans.size()>0 and st.size()<=300)
    {
        ll p = ans.back();ans.pop_back();
        if(st.find(p)!=st.end())continue;
        ans.push_back(p);
        for(ll i=0;i<N;++i)
        {
            ll x = abs(A[i]-p);
            ans.push_back(x);
        }
        st.insert(p);
    }
    if(st.size()>300)
    {
        cout<<"NO\n";return;
    }
    cout<<"YES\n"<<st.size()<<'\n';
    for(auto i:st)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/