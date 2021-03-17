#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
struct node{
    ll x,y,R;
};
void solve()
{
    ll N;cin>>N;
    node V[N];
    ll x1,y1,z1;
    for(ll i=0;i<N;++i)cin>>V[i].x>>V[i].y>>V[i].R;//,V.push_back({x1,y1,z1});
    //set<node> st;
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(i==j)continue;
            for(ll k=0;k<N;++k)
            {
                if(i==k or j==k)continue;
                ll d = abs(V[j].x - V[i].x);
                ll R1 = V[j].R;
                ll r = V[i].R;
                ll a = (ll)sqrt(4*d*d*R1*R1 -(d*d - r*r - R1*R1))/(double)d;
                cout<<a<<'\n';
                if(a==(V[k].R + V[k].R))
                {
                    ans++;
                    // vector<ll> A;
                    // A.push_back(i);
                    // A.push_back(j);
                    // A.push_back(k);
                    // sort(A.begin(),A.end());
                    // x1=A[0];
                    // y1=A[1];
                    // z1=A[2];
                    // st.insert({x1,y1,z1});
                }
            }
        }
    }
    cout<<ans<<'\n';//st.size()<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
