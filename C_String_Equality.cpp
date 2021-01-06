#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    map<char,ll> M1,M2,M3,M4;
    string s1,s2;cin>>s1>>s2;
    char mx1='a',mn1='z',mx2='a',mn2='z';
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        cout<<"Yes\n";return;
    }
    for(ll i=0;s1[i];++i)
    {
        ++M1[s1[i]];++M3[s1[i]];
        mx1 =  max(mx1,s1[i]);
        mn1 =  min(mn1,s1[i]);
    }
    for(ll i=0;s2[i];++i)
    {
        ++M2[s2[i]];++M4[s2[i]];
        mx2 =  max(mx2,s2[i]);
        mn2 =  min(mn2,s2[i]);
    }
    //cout<<mx1<<' '<<mn1<<'\n';
    //cout<<mx2<<' '<<mn1<<'\n';
    // if(mx1>mx2)
    // {
    //     cout<<"No\n";return;
    // }
    // if(mn1<mn2)
    // {
    //     cout<<"No\n";return;
    // }
    if(K==1)
    {
        cout<<"Yes\n";
    }
    for(auto i:M1)
    {
        if(i.second>=M3[i.first])
        {
            i.second -= M3[i.first];
        }
        else if(i.second<M3[i.first]) i.second=0;
    }
    for(auto i : M3)
    {
        if(i.second>=M2[i.first])
        {
            i.second -= M2[i.first];
        }
        else if(i.second<M2[i.first]) i.second=0;
    }
    vector<pair<ll,char>> V1,V2;
    for(auto i : M1)
    {
        if(i.second!=0)V1.push_back({i.second,i.first});
    }
    for(auto i : M3)
    {
        if(i.second!=0)V2.push_back({i.second,i.first});
    }
    sort(V1.begin(),V1.end()); sort(V2.begin(),V2.end());
    for(ll i=0;V1.size();++i)
    {
        if(V1[i].first%K!=0)
        {
            cout<<"No\n";return;
        }
    }
    for(ll i=0;i<V2.size();++i)
    {
        if(V2[i].first%K!=0)
        {
            cout<<"No\n";return;
        }
    }
    cout<<"Yes\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/