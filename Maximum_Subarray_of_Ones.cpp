#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    vector<vector<ll> > V;
    for (ll i = 0; i < N;++i) 
    { 
        if (A[i] == 1) 
        {  
            ll s = i, len;  
            while (A[i] == 1 && i < N) i++;

            len = i - s;  

            V.push_back({ len, s, i - 1 });  
        } 
    }
    if(V.size()==0){cout<<"0\n";return;}

    ll ans = 0;  
    for (ll i = 0; i < V.size() - 1; i++)
    {  
        ans = max(ans, V[i][0]);  
        if ((V[i + 1][1] - V[i][2] - 1 )== 2) 
        {  
            ans = max(ans, V[i][0] + V[i + 1][0]);  
        }  
        else if ((V[i + 1][1] - V[i][2] - 1) == 1) 
        {  
            ans = max(ans, V[i][0] + V[i + 1][0] - 1);  
        }  
    }  
    cout<< max(V[V.size() - 1][0], ans)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/