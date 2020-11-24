#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
            ll  n;cin>>n;
        ll ar[n];
        map<ll ,ll> mep,mep2;
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
            mep[ar[i]]=i+1;
            mep2[ar[i]]++;
        }
        for(auto i:mep2)
        {
            if(i.second==1) 
            {
                cout<<mep[i.first]<<"\n";
                return;
            }
        }
        cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/