#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    string ans="";
    string ch = "\\";
    string curr="";
    ll c=0;
    ll N= s.size();
    while(1)
    {
        ll p=0,q=0;
        ll a=0,b=0;
        ll i=0,j=N-1;
        while(i<j)
        {
            if(p==q)
            {
                if(s[i]=='/')++p;
                if(s[j]==ch[0])++q;
                --j;++i;string v = s;reverse(v.begin()+i+1,v.begin()+b);
                curr = s.substr(0,i) + v.substr(i+1,j-1) + s.substr(j,N);
                
                a=i;b=j;
                cout<<curr<<'\n';
            }
            else if(p>q)
            {
                if(s[j]==ch[0])++q;--j;
            }
            else if(q>p)
            {
                if(s[i]=='/')++p;++i;
            }            
        }
        s=curr;
        //reverse(s.begin()+a,s.begin()+b);
        if(p==0 and q==0)break;
    }
    cout<<s<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/