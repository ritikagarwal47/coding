#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
struct node{
    ll x,y,z;
};
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll dp[N]={0};stack<node> st;
    for(ll i=0;i<N;++i)
    {
        if(st.empty())
        {
            st.push({A[i],i,0});
        }
        else
        {
            //auto p = st.top();
            //ll x = p.x;
            //ll y = p.y;
            ll p = st.top().x;
            ll c=0;
            while(st.top().x<A[i])
            {
                if(p==st.top().x)
                {
                    c = max(c,st.top().z);
                    dp[st.top().y] = c;
                }
                else
                {
                    c = st.top().z;
                    p = st.top().x;
                    dp[st.top().y] = c;
                }
                st.pop();
                if(st.empty())break;
            }
            if(st.empty())st.push({A[i],i,0});
            else if(st.top().x==A[i])st.push({A[i],i,st.top().z + 1});
            else st.push({A[i],i,0});
        }
    }
    ll p = st.top().x;
    ll c=0;
    while(!st.empty())
            {
                if(p==st.top().x)
                {
                    c = max(c,st.top().z);
                    dp[st.top().y] = c;
                }
                else
                {
                    c = st.top().z;
                    p = st.top().x;
                    dp[st.top().y] = c;
                }
                st.pop();
            }
    for(auto i : dp)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/