    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;
    const int mod=1e9+7;
    // I'm in Love with Experience ^_^
    void solve()
    {
        ll N;cin>>N;
        ll sa=0,sb=0;
        ll A[N];for(ll i=0;i<N;++i)cin>>A[i],sa+=A[i];
        ll B[N];for(ll i=0;i<N;++i)cin>>B[i],sb+=B[i];
        sort(A,A+N);sort(B,B+N);
        ll Q;cin>>Q;
        ll a,b,c,d;cin>>a>>b>>c>>d;
        a = max(a,c);
        c = min(a,c);
        b = max(b,d);
        d = min(b,d);
        //ll count1=max(a,c),count2=max(b,d);
	    for(ll i=0;i<N;++i)
	    {
		    if(A[i]-a>0)
		    a+=A[i]-a;
		    a+=A[i];
		if(B[i]-b>0)
		b+=B[i]-b;
		b+=B[i];
		if(b<a and a>=Q && b>=Q)
		{
			cout << "B-D\n";
			return ;
		}
		else{
		if(a>=Q)
		{
			cout << "A-C\n";
			return ;
		}	
		if(b>=Q)
		{
			cout << "B-D\n";
			return ;
		}
		}

	}
	// if(count1<count2)
	// cout << "B-D\n";
	// else
	// cout << "A-C\n";
        // if(N==1)
        // {
        //     if(A[0]>B[0] and a>=b)cout<<"B-D";
        //     else cout<<"A-C";
        // }
        if(a>=b)cout<<"A-C";
        else cout<<"B-D";
    }
    int main(void)
    {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T=1;       // cin>>T;
    while(T--){solve();}exit(0);
    }/*Solved By:- Ritik Agarwal*/