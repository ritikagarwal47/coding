#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll N;
bool part(vector<pair<ll,ll>>&A)
{
    ll s=0;
    for (ll i = 0; i < N;++i)s += A[i].first;

    if (s % 2 != 0)return false;

    bool sub[s / 2 + 1][N + 1];

    for (ll i = 0; i <=N;++i)sub[0][i] = true;

    for (ll i = 1; i <= s / 2;++i)sub[i][0] = false;

    for (ll i = 1; i <= s / 2;++i) 
    {
        for (ll j = 1; j <= N;++j) 
        {
            sub[i][j] = sub[i][j - 1];
            if (i >= A[j - 1].first)
            {
                sub[i][j] |= sub[i - A[j - 1].first][j - 1];
            }
        }
    }
    return sub[s / 2][N];
}
void solve()
{
    cin>>N;ll s=0;
    vector<pair<ll,ll>> A(N),B(N);
    for(ll i=0;i<N;++i)
    {
        cin>>A[i].first;
        A[i].second=i+1;
        B[i]=A[i];
        s+=A[i].first;
    }

    //cout<<s<<'\n';
    if(s&1 or !part(A))
    {
        cout<<"0\n"; return;
    }
    else 
    {
        for(ll i=0;i<N;++i)
        {
            if(A[i].first&1)
            {
                cout<<"1\n";
                cout<<(i+1)<<'\n';return;
            }
        }
    }
    sort(A.begin(),A.end());sort(B.begin(),B.end());
    //if(part(A))
    {
        cout<<"1\n";
        for(ll i=0;i<N;++i)
        {
            B[i].first=0;
            if(!part(B))
            {
                cout<<B[i].second<<'\n';return;
            }
            B[i].first=A[i].first;
        }
    }  
    //else cout<<"0\n"; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/