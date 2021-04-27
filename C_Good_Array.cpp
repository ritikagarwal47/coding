#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// struct compare {
//     bool operator()(const pair<int, int>& value, 
//                                 const int& key)
//     {
//         return (value.first < key);
//     }
//     bool operator()(const int& key, 
//                     const pair<int, int>& value)
//     {
//         return (key < value.first);
//     }
// };
void solve()
{
    ll N;cin>>N;
    vector<ll> V;
    map<ll,ll> M;
    ll A[N],s=0;  
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];V.push_back(A[i]);//,i+1});
        s+=A[i];++M[A[i]];
    }
    sort(V.begin(),V.end());
    vector<ll> ans;
    for(ll i=0;i<N;++i)
    {
        s-=A[i];
        if(s%2==0)
        {
            if(binary_search(V.begin(),V.end(),s/2))
            // {
            //     ans.push_back(i+1);
            // }
            {
                ll p = lower_bound(V.begin(),V.end(),s/2) - V.begin();
                //cout<<V[p]<<' '<<A[i]<<'\n';
                if(V[p]!=A[i] or M[A[i]]>1)ans.push_back(i+1);
            }
        }
        s+=A[i];
    }
    cout<<ans.size()<<'\n';
    for(auto i:ans)cout<<i<<' ';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/