#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    string str[] ={"RGB","RBG","GRB","GBR","BRG","BGR"};
    ll mn=0,ans=N;
    ll p=0;
    for(ll i=0;i<6;++i)
    {
        mn = 0;
        for(ll j=0;s[j];++j)
        {
            if(s[j]!=str[i][j%3])++mn;
        }
        if(mn<ans)
        {
            ans = mn;
            p = i;
        }
    }
    cout<< ans <<'\n';
    for(ll i=0;i<N;++i)cout<<str[p][i%3];
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/