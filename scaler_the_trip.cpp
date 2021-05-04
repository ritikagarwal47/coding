#include<bits/stdc++.h>
#define ll int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll A;string x;cin>>A;ll N;cin>>N;
    vector<string> B;for(ll i=0;i<N;++i)cin>>x,B.push_back(x);
    map<char,ll> M;
    M['c']=4;M['w']=3;M['m']=2;M['o']=1;
    vector<ll> val,wt;
    for(ll i=0;i<B.size();++i)
    {
        string p = B[i];
        ll ans=0;
        for(ll j=0;p[j];++j)
        {
            ans+= M[p[j]];
        }
        val.push_back(ans*p.size());wt.push_back(p.size());
    }
    int i, w;
    int K[B.size() + 1][A + 1];
    for(i = 0; i <= N; i++)
    {
        for(w = 0; w <= A; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +K[i - 1][w - wt[i - 1]],K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    cout<< K[N][A];
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/