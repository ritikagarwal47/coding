#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll  n;cin>>n;
    stack<ll>st;
    for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            st.push(x);
        }
        if(n==1)
        {
            cout<<"1\n";
            return;
        }
        ll ans=1,mx=0,big,c=0;
        while(st.size()>0)
        {
            if(st.size()>1&&mx==0)
            {
                big=st.top();
                st.pop();
                c=0;
                mx=1;
            }
            if(mx==0&&st.size()<2)
            {
                break;
            }
            if(st.top()<=big)
            {
                c++;
                st.pop();
            }
            else
            {
                mx=0;
                ans=max(ans,c+1);
            }
            
        }
         ans=max(ans,c+1);
        ll fans=1;
        for(ll  i=ans;i>=2;i--)
        {
            fans=((i)%mod*(fans)%mod)%mod;
        }
        cout<<fans<<"\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/