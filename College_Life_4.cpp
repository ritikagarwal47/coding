#include<bits/stdc++.h>
#define p long long int
using namespace std;
const long long int mod=1e15;
//The end result of coders personal growth is,there codes becomes there documentation
p formating(p N,p A,p B,p C,p E)
{
    if(N==0)return mod;
    if(N>A and A>N) return -1;
    return mod;
}
p mul(p a,p B,p C)
{
    return a*(B-C);
}
p fun(p N,p E,p H,p A,p B,p C)
{
    if(N<=0)return 0;

   // if(abs(B-C)<0)return 0 ;

    p jabab = mod;

    if((N<=E) and (N<=H))jabab = min(jabab,N*C);

    if(2*N<=E)jabab = min(jabab,N*A);

    if((3*N)<=H)jabab = min(jabab,N*B);

    if(((H-N)/2>=1) and ((H-N)/2 >=(N-E)) )
    {
        if((B-C)<0)
        {
            p helper = min(N-1,(H-N)/2);
            helper = mul(helper,B,C);
            jabab = min(jabab,helper + N*C);
        }
        else
        {
            p helper = max(1LL,N-E);
            helper = mul(helper,B,C);
            jabab = min(jabab,helper + N*C);
        }
    }
    if((E-N)>=1 and (E-N)>=(N-H))
    {
        if((A - C)<0)
        {
            p helper = min(N-1,(E-N));
            helper = mul(helper,A,C);
            jabab = min(jabab,helper + N*C);
        }
        else
        {
            p helper = max(1LL,N-H);
            helper = mul(helper,A,C);
            jabab = min(jabab,helper + N*C);
        }
    }
    if((E/2)>=1 and (E/2>= (3*N - H + 2)/3))
    {
        if((A-B)<0)
        {
            p helper = min(N-1,E/2);
            helper = mul(helper,A,B);
            jabab = min(jabab,helper + N*B);
        }
        else
        {
            p helper = max(1LL, (3*N - H + 2)/3);
            helper = mul(helper,A,B);
            jabab = min(jabab,helper + N*B);
        }
    }
    if((E>=3) and (H>=4) and (N>=3))jabab = min(jabab,fun(N-3,E-3,H-4,A,B,C) + A + B + C);
    return jabab;
}
void solve()
{
    p N,E,H,A,B,C;cin>>N>>E>>H>>A>>B>>C;
    p rao = mod;
    // if(N>max(E,H))cout<<"-1\n";
    // else if(N>E and N>H)cout<<"-1\n";
    // else
    {
        rao = formating(N,A,B,C,E);
        rao = fun(N,E,H,A,B,C);
        if(rao==mod)cout<<"-1\n";
        else cout<<rao<<'\n';
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/