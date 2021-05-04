#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll B[M]; for(ll i=0;i<M;++i)cin>>B[i];
    //unordered_set<ll> st1;
    stack<ll> st1;
    set <ll> st2;
    st1.push(0);
    st2.insert(0);
    while (!st1.empty())
    {
        ll V = st1.top();
        cout<<V<<' ';
        st1.pop();
        for(ll i=0;i<N;++i)
        {
            ll p = V|A[i];
            if(st2.find(p)==st2.end())
            {
                st2.insert(p);
                st1.push(p);
            }
        }
        for(ll i=0;i<M;++i)
        {
            ll p = V&B[i];
            if(st2.find(p)==st2.end())
            {
                st2.insert(p);
                st1.push(p);
            }
        }
        //st1.erase(V);
    }
    cout<<'\n';
    for(auto i : st2)cout<<i<<' ';cout<<'\n';
    cout<< st2.size() <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/