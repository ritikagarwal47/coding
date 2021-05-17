#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    for(ll i=0;i<N;++i)
    {
        if(i&1)
        {
            bool ok=false;ll p =-1;
            char ch = '0';
            for(ll j=i+2;j<N;j+=2)
            {
                if(ch<=s[j])
                {
                    ch= s[j];p=j;
                }
            }
            if(ch>s[i])
            {
                swap(s[i],s[p]);
                cout<<s<<'\n';return;
            }
        }
        else
        {
            bool ok=false;ll p =-1;
            char ch = '0';
            for(ll j=i+2;j<N;j+=2)
            {
                if(ch<=s[j])
                {
                    ch= s[j];p=j;
                }
            }
            if(ch>s[i])
            {
                swap(s[i],s[p]);
                cout<<s<<'\n';return;
            }
        }
    }  
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/