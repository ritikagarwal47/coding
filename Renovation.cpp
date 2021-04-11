#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll W,H,A,B,M,C;cin>>W>>H>>A>>B>>M>>C;
    ll ans=0; 
    ll a,b,c,d,e,f; 
    if(W%A==0 and H%B==0)
    {
        a = (W/A)*(H/B);
        b = (a+9)/10;
        cout<<b*M<<'\n';return;
    }
    if(W%A==0)
    {
        a = (W/A)*(H/B) + W/A;
        b = B - (H - B*(H/B));
        ans = ((a+9)/10)*M + b*(W)*C;
        //cout<<a<<' '<<b<<'\n';
        cout<<ans<<'\n';return;
    }
    if(H%B==0)
    {
        a = (W/A)*(H/B) + H/B;
        b =  A - (W - A*(W/A));
        ans = ((a+9)/10)*M + b*(H)*C;
        //cout<<a<<' '<<b<<'\n';
        cout<<ans<<'\n';return;
    }
    a = (W/A)*(H/B) + H/B + W/A;
    b = A - (W - A*(W/A)) ;
    c = B - (H - B*(H/B)) ;
    ans = ((a+9)/10)*M + (b*H + c*W)*C;// + c*(W/A + 1)*C;
    //cout<<a<<' '<<b<<' '<<c<<'\n';
    cout<<ans<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/