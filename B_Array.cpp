#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    set<ll> st;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],st.insert(A[i]);
    if(st.size()<K)cout<<"-1 -1";
    else
    {
        ll a=0,b=0,mn=LONG_MAX;
        map<ll,ll> M;ll p=0;ll s=0;
        for(ll i=0;i<N;++i)
        {
            //++M[A[i]];
            if(M[A[i]]==0)++p;
            ++M[A[i]];
            // if(p<K)continue;
            // else
            // {
                while(p==K)
                {
                    if(abs(s-i)<mn)
                    {
                        mn = abs(s-i);
                        a=s;b=i;
                    }
                    //else if(p==K)break;
                    // else
                    // {
                        --M[A[s]];
                        if(M[A[s]]==0)p--;
                        ++s;
                    //}
                }
                
                
            //cout<<p<<' '<<i<<'\n';
        }
        cout<<a+1<<' '<<b+1<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/