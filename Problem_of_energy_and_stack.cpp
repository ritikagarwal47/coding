#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
double fun(ll n,double a,double b)
{
    //cout<<a<<' '<<b<<'\n';
    // string s = to_string(b);
    // cout<<s<<'\n';
    // ll l = s.size()-2;
    // cout<<l<<'\n';
    // b*=(ll)pow(10,l);
    // cout<<b<<'\n';
    double ans = 0;
    for(ll i=0;i<n;++i)
    {
        ans +=a;
        //cout<<(a*b)/100<<'\n';
        a -= (a*b)/100;        
    }
    return ans;
}
void solve()
{
    ll S;cin>>S;
    vector<pair<double,ll>> V(S);
    vector<double> lifter(S);
    vector<pair<ll,string>> A(S);
    for(ll i=0;i<S;++i)
    {
        ll x , z ;string y;cin>>x>>y>>z;
        A[i].first = x;
        A[i].second = y;
        lifter[i] = z;
        //ll a = y;
        string a="",b="";
        bool f=false;
        for(ll j=0;y[j];++j)
        {
            if(y[j]=='.'){f=true;continue;}
            if(!f)a+=y[j];
            else b+=y[j];
        }
        //cout<<a<<' '<<b<<'\n';
        V[i].first = fun(x,stoll(a),stoll(b));
        V[i].second = i ;
    }
    sort(V.begin(),V.end());
    sort(lifter.begin(),lifter.end());
    //for(ll i=0;i<V.size();++i)cout<<V[i].first<<' '<<V[i].second<<'\n';
    //cout<<'\n';
    //for(ll i=0;i<S;++i)cout<<lifter[i]<<' ';
    vector<string> ans(S);
    for(ll i=0;i<S;++i)ans[i] = "NS";
    ll i=S-1,j=S-1;
    while (i>=0 and j>=0)
    {
       // cout<<lifter[i]<<' '<<V[j].first<<'\n';
        if(lifter[i]>=V[j].first)
        {
            ll p = V[j].second;
            ans[p] = to_string((ll)lifter[i]);
            --i;
            //cout<<p<<'\n';
        }
        --j;
    }    
    
    for(ll i=0;i<S;++i)
    {
        cout<<A[i].first<<" -- "<<A[i].second<<" -- "<<ans[i]<<'\n';
    }
    // for(ll i=0;i<S;++i)
    // {
    //     vector<pair<double,ll>> p(S);
    //     ll st=LONG_MAX,ra=-1;
    //     for(ll j=0;j<S;++j)
    //     {
    //         if(lifter[i]>V[j].first)
    //         {
    //             if(st>(lifter[i]-V[j].first))
    //             {
    //                 st = lifter[i]-V[j].first;
    //                 ra = V[j].second;
    //             }
    //         }

    //     }
    //     //cout<<st<<' '<<ra<<'\n';
    // }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/