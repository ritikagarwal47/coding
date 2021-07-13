#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void fun(map<ll,ll> M,ll N,ll C)
{
    vector<pair<ll,ll>> V;
    ll hbaba=0;
    ll jbaa = (*M.begin()).first;
    for(auto i : M) 
    {
        if((hbaba>0) && (i.first-jbaa) > 0) 
            V.push_back({hbaba, (i.first-jbaa)});
        jbaa = i.first;
        hbaba += i.second;
    }
    sort(V.rbegin(), V.rend());
    ll ans = N;
    for (auto i : V) 
    {
        ll tp = min(C, i.second);
        C = C-tp;
        ans=ans+(i.first*tp);
    }   
    cout<<ans<<'\n';
}
void solve()
{
    ll N,C;cin>>N>>C;
    //ll V[10000+4]={0};
    ll mx = 0;
    map<ll,ll> V;
    for(ll i=0;i<N;++i)
    {
        ll a,b;cin>>a>>b;
        if((b-a)>=2)
        {
            V[a+1]+=1;V[b]-=1;
            if (V[a+1]==0)
                V.erase(a+1);
            if (V[b]==0)
                V.erase(b);
        }
        mx = max(mx,b);
    } 
    map<ll,ll> M;
    for(auto i:V)
    {
        if(i.second)
        {
            M[i.first]=i.second;
        }
    }
    fun(V,N,C);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/