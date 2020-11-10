#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll M,X;cin>>M>>X;
    vector<ll> V;
    ll x,s=0;
    for(ll i=0;i<M;++i)
    {
        cin>>x;s+=x;
        V.push_back(x);
    }
    if(s>X)cout<<"Thank you, your order for "<<X<<" oranges are accepted\n";
    else cout<<"Sorry, we can only supply "<< s-1 <<" oranges\n",X=s-1;
    for(ll i=0;i<V.size();++i)
    {
        if(X>=V[i])
        {
            cout<<V[i]<<' '<<V[i]<<" 0\n";
            X-=V[i];
        }
        else
        {
            cout<<V[i]<<' '<<X<<' '<<V[i]-X<<'\n';
            X=0;
        }
        
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/