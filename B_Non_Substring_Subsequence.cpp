#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
string s;
void fun(ll l,ll r)
{
        char p = s[r-1];
        for(ll i=r;s[i];++i)
        {
            if(p==s[i])
            {
                cout<<"YES\n";return;
            }
        }
        p = s[l-1];
        for(ll i=l-2;i>=0;--i)
        {
            if(p==s[i])
            {
                cout<<"YES\n";return;
            }
        }
        cout<<"NO\n";
}
void solve()
{
    ll N,Q;cin>>N>>Q;
    cin>>s;
    ll l,r;
    while (Q--)
    {
        cin>>l>>r;
        if((l==1 and r==N))
        {
            cout<<"NO\n";continue;
        }
        fun(l,r);
        string str = s.substr(l-1,r-1);
        //cout<<l-1<<' '<<r-1<<' '<<str<<'\n';
        
        //cout<<str<<'\n';
        // ll i=0,j=N-1;
        // ll x=0,y=str.length()-1;
        // cout<<x<<' '<<y<<'\n';
        // bool f=false;
        // while(i<j)
        // {
        //     if(s[i]==str[x])
        //     {
        //         ++x;++i;
        //     }
        //     else ++i;

        //     if(s[j]==str[y])
        //     {
        //         --y;--j;
        //     }
        //     else --j;

        //     if(x>=y)
        //     {
        //         cout<<"YES\n";
        //         i=0;j=0;
        //         f=true;
        //     }
        // }
        // if(!f)cout<<"NO\n";


    }
     
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/