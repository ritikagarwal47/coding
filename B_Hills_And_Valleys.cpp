#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll c=0;
    //vector<ll> h,v;

    ll H=0,V=0;
    for(ll i=1;i<N-1;++i)
    {
        if(A[i]>A[i-1] and A[i]>A[i+1])
        {
            ++H;++c;
            //h.push_back(i);
        }
        else if(A[i]<A[i-1] and A[i]<A[i+1])++c,++V;
    }
    if(c==0 or N<3)
    {
        cout<<"0\n";return;
    }
    if(N>=5)
    {
        for(ll i=2;i<N-2;++i)
        {
            if(A[i]<A[i+1] and A[i]<A[i-1] and A[i-1]>A[i-2] and A[i-1]>A[i] and A[i+1]>A[i+2] and A[i+1]>A[i])
            {
                cout<< max(c - 3,0LL) <<'\n';return;
            }
            if(A[i]>A[i+1] and A[i]>A[i-1] and A[i-1]<A[i-2] and A[i-1]<A[i] and A[i+1]<A[i+2] and A[i+1]<A[i])
            {
                cout<< max(c - 3,0LL) <<'\n';return;
            }
        }
    }
    if(N>=4)
    {
        for(ll i=1;i<N-2;++i)
        {
            if(A[i]>A[i-1] and A[i]>A[i+1] and A[i+1]<A[i] and A[i+1]<A[i+2])
            {
                cout<< max(c - 2,0LL) <<'\n';return;
            }
            if(A[i]<A[i-1] and A[i]<A[i+1] and A[i+1]>A[i] and A[i+1]>A[i+2])
            {
                cout<< max(c - 2,0LL) <<'\n';return;
            }
        }
    }
    cout<<max(c-1,0LL)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/