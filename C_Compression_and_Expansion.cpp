#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    set<ll> st;vector<vector<ll>> ans;
    vector<ll> V;
    for(ll i=0;i<N;++i)
    {
        if(A[i]==1)V.push_back(A[i]);
        else
        {
            while(!V.empty() and (V.back()!=(A[i]-1)))V.pop_back();

            if(V.empty())V.push_back(A[i]);
            else V.pop_back(),V.push_back(A[i]);
        }
        if(V.empty())V.push_back(A[i]);
        //for(auto i:V)cout<<i<<'\n';
        ans.push_back(V);
        // for(ll i=0;i<ans.size();++i)
        // {
        //     for (ll j=0;j<ans[i].size()-1;++j)cout<<ans[i][j]<<".";
        //     cout<<ans[i][ans.size()-1]<<'\n';
        // }
    }
    for(ll i=0;i<ans.size();++i)
    {
        // if (ans[i].size() == 1)
        // {
        //     cout<<ans[i][0]<<'\n';
        //     continue;
        // }
        for (ll j=0;j<ans[i].size()-1;++j)cout<<ans[i][j]<<".";
        cout<<ans[i][ans[i].size()-1]<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/