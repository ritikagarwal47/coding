#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{ 
    ll n;cin>>n;
    map<ll,ll > mep;
    std::vector<ll> ar(n);
    for(ll i=0;i<n;++i)
    {
        cin>>ar[i];
        mep[ar[i]]++;
    }
    ll maxkey=0,maxval=0;
    for(auto i:mep)
    {
        if(i.second>maxval)
        {
            maxval=i.second;
            maxkey=i.first;
        }
    }
    if(maxval==n)
    {
        cout<<"NO\n";
        return;
    }
    ll maxin=0;
    vector<ll>  same;
    for(ll i=0;i<n;i++)
    {
        if(ar[i]==maxkey)
        {
            maxin=i;
            same.push_back(i);
        }
    }
    same.pop_back();
    cout<<"YES\n";
    for(ll j=maxin;j>=0;j--)
    {
        if(ar[maxin]!=ar[j])cout<<maxin+1<<" "<<j+1<<"\n";
 
    }
    for(ll j=maxin;j<n;j++)
    {
        if(ar[maxin]!=ar[j])cout<<maxin+1<<" "<<j+1<<"\n";
    }
    for(int i=0;i<same.size();i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[same[i]]!=ar[j])
            {
                cout<<same[i]+1<<" "<<j+1<<"\n";
                break;
            }
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
