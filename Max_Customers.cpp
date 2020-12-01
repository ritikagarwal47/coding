#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    vector<ll> in;
    vector<ll> out;
    ll x,y;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;
        in.push_back(x);
        out.push_back(y);
    }
    sort(in.begin(),in.end());sort(out.begin(),out.end());
    ll i=1,j=0;
    ll t=in[0],mx=1,c=1;
    while(i<N and j<N)
    {
        if(in[i]<=out[j])
        {
            ++c;
            if(c>mx)
            {
                mx = c;
                t = in[i];
            }
            ++i;
        }
        else
        {
            c--;
            ++j;
        }
        
    }
    cout<< mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/