#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s1,s2;cin>>s1>>s2;
    ll ans=0;
    //bool ok1=false,ok2=false;
    for(ll i=0;i<N;++i)
    {
        if((s1[i]=='1' and s2[i]=='0') or  (s1[i]=='0' and s2[i]=='1'))ans+=2;
        else if(s1[i]=='0' and s2[i]=='0')
        {
            if(i<N-1)
            {
                if(s1[i+1]=='1' and s2[i+1]=='1')
                {
                    ++ans;++i;
                }
                
            }
            ++ans;
        }
        else if(s1[i]=='1' and s2[i]=='1')
        {
            if(i<N-1)
            {
                if(s1[i+1]=='0' or s2[i+1]=='0')
                {
                    ans+=2;++i;
                }
            }
        }
        //cout<<ans<<' ';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/