#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool valid(  ll  N)
{
      ll  cube_root;
    cube_root = round(cbrt(N));
 
    // If cube of cube_root is equals to N,
    // then print Yes Else print No
    if (cube_root * cube_root * cube_root == N) {
        
        return 1;
    }
    else {
        
        return 0;
    }
}
void solve()
{
    ll N;cin>>N; 
    if(N==1)
    {
        cout<<"NO\n";return;
    }
    //cout<<N<<' ';
    for(ll i=1;i<=10000;++i)
    {
        ll a = (ll)pow(i,3);
        ll b = N - a;
        if(valid(b))
        {
            cout<<"YES\n";return;
        }
    }
    cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/