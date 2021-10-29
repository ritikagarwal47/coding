#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;//N/=2;
    if(N%4==0)
    {
        cout<<"YES\n";
        vector<ll> A,B;
        bool ok=true;
        for(ll i=1;i<=N;i+=2)
        {
            if(ok)
            {
                A.push_back(i);
                B.push_back(i+1);
            }
            else
            {
                B.push_back(i);
                A.push_back(i+1);
            }
            ok=!ok;
        }
        reverse(A.begin(),A.end());
        for(auto i:A)cout<<i<<' ';cout<<'\n';
        for(auto i:B)cout<<i<<' ';cout<<'\n';
    }
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/