#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    if(K==1)
    {
        ll mx=0;
        ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
        // //sort(A,A+N);
        // vector<ll> V;
        // for(ll i=0;i<N;++i)
        // {
        //     if(A[i]>0)V.push_back(A[i]);
        // }
        ll max_so_far = LLONG_MIN, max_ending_here = 0;
 
        for (ll i = 0; i < N;++i)
        {
            max_ending_here = max_ending_here + A[i];
            if (max_so_far < max_ending_here)max_so_far = max_ending_here;
 
            if (max_ending_here < 0)max_ending_here = 0;
        }
        //return max_so_far;
             // ll ans=0;
        // for(ll i=0;i<N;++i)
        // {
        //     ans+= A[i]*(i+1);
        // }
        cout<<max_so_far<<'\n';
        return ;
    }
    //ll mx=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll max_so_far = LLONG_MIN, max_ending_here = 0;
    ll left[N],right[N];
    for (ll i=0;i<N;++i)
    {
        max_ending_here = max_ending_here + A[i];
        if (max_so_far < max_ending_here)max_so_far = max_ending_here;
        if (max_ending_here < 0)max_ending_here = 0;
        left[i]=max_so_far;
    }
    max_so_far = LLONG_MIN;max_ending_here = 0;
    for (ll i=N-1;i>=0;--i)
    {
        max_ending_here = max_ending_here + A[i];
        if (max_so_far < max_ending_here)max_so_far = max_ending_here;
        if (max_ending_here < 0)max_ending_here = 0;
        right[i]=max_so_far;
    }
    ll mx=LONG_LONG_MIN;
    //for(auto i:left)cout<<i<<' ';cout<<'\n';
    //for(auto i:right)cout<<i<<' ';cout<<'\n';
    for(ll i=0;i<N-1;++i)
    {
        mx = max(mx, left[i] + right[i+1]*2);//cout<<mx<<'\n';
    }
    cout<<mx<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/