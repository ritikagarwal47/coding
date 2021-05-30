#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    string s;cin>>s;
    M = min(M,N);
    for(ll i=0;i<M;++i)
    {
        bool ok=true;
        //string pre(N,'0');
        for(ll i=0;i<N;++i)
        {
            if(i==0)
            {
                if(s[0]=='0' and s[1]=='1'){}//s[0]='1',ok=false;
            }
            else if(i==N-1)
            {
                if(s[N-1]=='0' and s[N-2]=='1'){}//s[N-1]='1',ok=false;
            }
            else if(s[i]=='0' and s[i+1]=='0' and s[i-1]=='0'){}
            else if(s[i]=='0' and s[i+1]=='1' and s[i-1]=='1'){}
            else if(s[i]=='0' and (s[i+1]=='1' or s[i-1]=='1')){}//s[i]='1',ok=false,++i;
        }
        //if(ok)break;
        string pre(N,'0');
            //pre=s;
        for(ll i=0;i<N;++i)
        {   
            if(s[i]=='1') continue;
            ll l=i-1,r=i+1;
            ll p=0;
            if(l<0)++p;
            if(r>=N)++p;
            if(l>=0 and s[l]=='0')++p;
            if(r<N and s[r]=='0')++p;
            if(p==2 or p==0)continue;
            pre[i]='1';
        }
        for(ll i=0;i<N;++i) 
            if(s[i]=='1')pre[i]='1';
        s=pre;
        if(count(pre.begin(),pre.end(),'1')==N) break;
        //cout<<s<<'\n';
    }   
            
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/