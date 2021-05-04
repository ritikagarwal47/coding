#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll int n,w,sum=0,esum=0;
        cin>>n>>w;
        vector<ll> ar(n);
        map<ll,ll> mep;
        for(ll i=0;i<n;++i) cin>>ar[i],esum+=ar[i],mep[ar[i]]++;
        ll int ans=0;
        bool f=0;
        while(esum>0)
        {   
            sum=0;
            for(int i=32;i>=0;i--)
            {
                ll int k=pow(2,i);
                while(sum+k<=w and mep[k]>0)
                {
                    sum+=k;
                    mep[k]--;
                }
            }
            ans++;
            esum-=sum;

        }
        cout<<ans<<"\n";
        // if(sum%w!=0) ans++;
        //cout<<ans<<"\n";
    // ll N,K;cin>>N>>K;
    // ll x,p=0;
    // map<ll,ll> M;
    // for(ll i=0;i<N;++i)
    // {
    //     cin>>x;p+=x;
    //     M[x]++;
    // }  
    // if(p<=K)
    // {
    //     cout<<"1\n";return;
    // }
    // cout<< (p+K-1)/K <<'\n';
    // ll mx=0,s=0;
    // map<ll,ll> mp;
    // for(auto i : M)
    // {
    //     mx = max(mx,i.second);
    //     mp[i.second] += i.first;
    //     s+=i.first;
    // }
    // for(auto i = mp.rbegin();i!=mp.rend();++i)
    // {

    // }
    // cout<<p<<' '<<s<<'\n';
    // cout<<mx<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/