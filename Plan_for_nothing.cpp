#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N;cin>>N;
   vector<pair<ll,ll>> A;
   while(N--)
   {
       ll M;cin>>M;       
       for(ll i=0;i<M;++i)
       {
           ll x,y;cin>>x>>y;
           A.push_back(make_pair(x,y));
       }
   }
   sort(A.begin(),A.end());
    ll a=A[0].first,b=A[0].second;
    if(a>1){cout<<"1\n";return;}
    for(ll i=1;i<A.size();i++)
    {   
        if(b+1>=A[i].first)b=max(b,A[i].second);
        else
        {   
            cout<<b+1<<"\n";return;
        }            
    }
    cout<< b+1 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/