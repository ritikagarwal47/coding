#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    // if(N<=2)
    // {
    //     cout<<"YES";return;
    // } 
    for(ll i=2;i<N;++i)
    {
        ll p = (s[i-1]-'A') ;
        ll q =  (s[i-2]-'A');
        ll a =  ( s[i]-'A');
        //cout<<a<<' '<<p<<' '<<q<<'\n';
        if(a!=(( p + q )%26))
        {
            cout<<"NO";return;
        }
    }
    cout<<"YES";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/