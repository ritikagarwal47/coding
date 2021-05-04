#include<bits/stdc++.h>
#define ll long long 
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void post()
{
    for(ll i=0;i<10000000;)++i;
}
 vector<ll> V1,V2;
 const ll MM=3e5;
 ll A[MM],B[MM],C[MM],D[MM];ll vis[MM];
 
bool check(ll x,ll y)
{
   
    for(int i=0;i<V1.size();i++)
    {
        if(V1[i]<=y and V2[i]>=x) return true;  
    }
    return false;

}
void fun(ll M,ll Y,ll N,ll X)
{   
    
    for(ll i=0;i<M;++i) cin>>A[i]>>B[i]>>C[i]>>D[i],vis[i]=0;
    if(X==Y) 
    {
        cout<<"0\n";
        return;
    }
    V1.clear();
    V2.clear();
    
    ll c=0,ans=-1;
    
   
    V1.push_back(X);V2.push_back(X);
    
    while(ans==-1 and V1.size()!=0)
    {
    vector<ll> P,Q;
    for(ll i=0;i<M;++i)
    {
        if(vis[i]==0 and check(A[i],B[i]))
        {   
             
            P.push_back(C[i]);
            Q.push_back(D[i]);
            if(C[i]<=Y and D[i]>=Y)
            {
                ans = c + 1;
               
            }
            vis[i]=1;
        }

     
    }
    V1=P;V2=Q;++c;  
    }
    if(ans==-1) cout<<"-1\n";
    else cout<<ans<<'\n';
}


void solve()
{
    ll N,M,X,Y;cin>>N>>M>>X>>Y;
   
     fun(M,Y,N,X);
       
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();post();}exit(0);
}/*Solved By:- Ritik Agarwal*/