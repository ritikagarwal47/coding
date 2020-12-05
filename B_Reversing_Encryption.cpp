#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
// void factor(vector<ll> &V, ll N)
// {
//     for(ll i=1;i*i<=sqrt(N);++i)
//     {
//         if(N%i==0)
//         {
//             if(i*i==N)
//             {
//                 V.push_back(i);
//             }
//             else
//             {
//                 V.push_back(i);
//                 V.push_back(N/i);
//             }            
//         }
//     }
// }
void solve()
{
    ll N;cin>>N;
    //vector<ll> V;
    string s;cin>>s;
    //factor(V,N);
    // if(V.size()<=2)
    // {
    //     cout<<s<<'\n';return;
    // }
    //sort(V.begin(),V.end(),greater<ll>());
    for(ll i=1;i<=N;++i)
    {
        if(N%i==0)reverse(s.begin(),s.begin()+i);
    }
    cout<< s <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/