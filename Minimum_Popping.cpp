#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[M]; for(ll i=0;i<M;++i)cin>>A[i];
    vector<ll> V(N+1);set<ll> st;
    ll l=0,r=M-1;
    for(ll i=0;i<M;++i)
    {
        //if(!V[A[i]-1])V[A[i]-1]=i;
        st.insert(A[i]);
        V[A[i]]++;
        if(st.size()==N)
        {
            l=i;break;
        }
    }
    ll mn = l+1;
    while(l>=0)
    {
        --V[A[l]];
        while(!V[A[l]])++V[A[r]],--r;
        --l;
        mn=min(mn,l+(M-r));
        //--l;
    }
    cout<<mn<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/