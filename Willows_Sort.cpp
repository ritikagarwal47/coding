#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll t=1;
void solve()
{
    ll N;cin>>N;
    vector<string> V;
    for(ll i=0;i<N;++i)
    {
        string x;cin>>x;
        reverse(x.begin(),x.end());
        V.push_back(x);
    }
    sort(V.begin(),V.end());
    cout<<"Case "<<t++<<":\n";
    for(ll i=0;i<N;++i)
    {
        string x = V[i];
        reverse(x.begin(),x.end());
        cout<<x<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/