#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    map<ll,ll> st;
    ll x;
    for(ll i=0;i<4;++i)
    {
        cin>>x;
        st[x]++;
    }
    if(st.size()==4 or st.size()==3)cout<<"2\n";
    else if(st.size()==1)cout<<"0\n";
    else
    {
        if(st[x]==1 or st[x]==3)cout<<"1\n";
        else cout<<"2\n";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/