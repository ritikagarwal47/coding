#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;

void solve()
{
    ll S,D;cin>>S>>D;
    if(S==D)cout<<"Present";
    else if(S>D)
    {
        ll l = S%4;
        ll r = D%4;
        ll H=0,V=0;
        bool ok1=false;
        string s;
        H = S/4 - D/4;
        if(l>r)
        {
            ok1=true;
            V = l-r;
            s = "W";
        }
        else
        {
            ok1=true;
            V = r-l;
            s = "E";
        }
        if(ok1)
        {
            if(s=="E")
            {
                for(ll i=0;i<V;++i)
                {
                    cout<< S++ <<' '<<s<<'\n';
                }
            }
            else
            {
                for(ll i=0;i<V;++i)
                {
                    cout<< S-- <<' '<<s<<'\n';
                }
            }
            
        }
        for(ll i=0;i<H;++i)
        {
            cout<< S<<" S\n";
            S-=4;
        }
    }
    else
    {
        ll l = S%4;
        ll r = D%4;
        ll H=0,V=0;
        bool ok1=false;;
        string s;
        H = D/4 - S/4;
        if(l>r)
        {
            ok1=true;
            V = l-r;
            s = "W";
        }
        else
        {
            ok1=true;
            V = r-l;
            s = "E";
        }
        if(ok1)
        {
            if(s=="E")
            {
                for(ll i=0;i<V;++i)
                {
                    cout<< S++ <<' '<<s<<'\n';
                }
            }
            else
            {
                for(ll i=0;i<V;++i)
                {
                    cout<< S-- <<' '<<s<<'\n';
                }
            }
        }
        for(ll i=0;i<H;++i)
        {
            cout<< S <<" N\n";
            S+=4;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}
