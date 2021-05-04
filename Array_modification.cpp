    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
    const int mod = 1e9 + 7;
    // I'm in Love with Experience ^_^
    void solve()
    {
        ll N;cin >> N;
        vector<ll> V;
        ll A[N];
        ll m=0; ll pre[N],suff[N];
        for (ll i = 0; i < N; ++i)
        {
            cin>>A[i];
            pre[i] = suff[i] = A[i];
        }     
        ll curr=0;  
        for (ll i = 0; i < N; ++i)
        {
            pre[i] = curr + A[i];
            curr  = (pre[i])/2;
        }
        curr=0;
        for(ll i=N-1;i>=0;--i)
        {
            suff[i] = (curr + A[i]) ;
            curr  = suff[i]/2;
        }
        ll  mx= 0;
        for(ll i=0;i<N;++i)
        {
            mx = max(mx,A[i] + abs(pre[i]-A[i]) + abs(suff[i] -A[i]));
        }
        cout<< mx <<'\n';
    }
    int main(void)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int T = 1; // cin>>T;
        while (T--)
        {
            solve();
        }
        exit(0);
    } /*Solved By:- Ritik Agarwal*/