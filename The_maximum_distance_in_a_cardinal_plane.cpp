    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;
    const int mod=1e9+7;
    // I'm in Love with Experience ^_^
    void solve()
    {
        ll N;cin>>N;
        vector<ll> V[N+1];
        ll x,y,z;
        for(ll i=1 ;i<=N;++i)
        {
            cin>>x>>y;
            V[i].push_back(abs(x + y));
            //V[i].second = abs(x + y);
        }
        ll Q;cin>>Q;
        char ch;
        while(Q--)
        {
            cin>>ch>>x>>y>>z;
            if(ch=='+')
            {
                V[x].push_back(abs(y+z));
                //V[x] = max(V[x],abs(y+z));
                //V[x].second = min(V[x].second,abs(y+z)); 
            }
            else
            {
                ll mn=LLONG_MAX,mx = LLONG_MIN;
                ll ans=0;
                for(ll i=x;i<=y;++i)
                {
                     for(auto l : V[i])
                        {
                           for(ll j=x;j<=y;++j)
                           {
                               for(auto r: V[j])
                               {
                                   ans = max(ans,abs((l-z)*(l-z)-(r-z)*(r-z)));
                               }
                           }
                        }
                }
                
                cout<< ans <<'\n';
            }
            //cout<< "36\n";
            
        }
    }
    int main(void)
    {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T=1;        //cin>>T;
    while(T--){solve();}exit(0);
    }/*Solved By:- Ritik Agarwal*/