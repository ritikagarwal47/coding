#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
int main()
{
    cin.tie(NULL);
ll t;cin>>t;
    while(t--)
    {
    ll N;cin>>N;
    ll x;
    if(N==1)
    {   
        cin>>x;
        ll Q; cin>>Q;
        while(Q--)
        {
            ll  r;cin>>r;
            if(x&1)cout<<(r*x)%mod<<"\n";
            else cout<<((x-1)*(r-1) + x)%mod<<"\n";
        }
        continue;            
    }
    ll A[N],C[N]; for(ll i=0;i<N;++i)cin>>A[i];
    //for(ll i=0;i<N;++i)A[i] = C[(i-1)%N+1];
    bool first=false,last=false;
    if(A[0]==1)first=true;
    if(first)
    {
        ll Q; cin>>Q;
        while(Q--)
        {
            ll  r;cin>>r;r-=2;
            cout<< (r/N + 1)%mod <<'\n';
        }
        continue;   
    }
    vector<pair<ll,bool>> ans(N);
    ll s=0;
    for(ll i=0;i<N;++i)
    {
        ans[i].second = false;
        if(i==N-1)
        {
            if(A[i]&1)ans[i].first = (s + A[i])%mod,s = (s + A[i])%mod;
            else ans[i].first = (s + A[i])%mod,s=(s+A[i]-1)%mod;
        }
        else if(A[i]==1)
        {
            if(A[i-1]&1)ans[i].first = (ans[i-1].first)%mod,s = (ans[i-1].first)%mod;
            else 
            {
                ans[i].first = (s+A[i])%mod;
                s = (ans[i].first-2)%mod;
            }
                //,//--s;
            //ans[i].second = true;
        }
        else 
        {
            if(A[i]&1)
            {
                ans[i].first = (s + A[i])%mod;
                //ans[i].second = true;
                s=(s+A[i]-1)%mod;
            }
            else 
            {
                ans[i].first = (s + A[i])%mod;
                //ans[i].second = true;
                s=(s+A[i])%mod;
            }
        }
        //cout<<ans[i].first<<' '<<s<<'\n';
        s%=mod;
    }
    ll Q;cin>>Q;
    while(Q--)
    {
        ll R;cin>>R;--R;
        //cout<<R%N<<'\n';
        //if(ans[R%N].second)cout<< s*(R/N) + ans[R%N].first + 1 <<'\n';
        //else 
        cout<< ((s*(R/N))%mod + (ans[R%N].first)%mod)%mod <<'\n';
    }
    }
return 0;
}