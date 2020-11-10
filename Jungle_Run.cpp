#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
int db(int N) 
{ 
  
    // To store the binary number 
    ll B_Number = 0; 
    int cnt = 0; 
    while (N != 0) { 
        int rem = N % 2; 
        ll c = pow(10, cnt); 
        B_Number += rem * c; 
        N /= 2; 
  
        // Count used to store exponent value 
        cnt++; 
    } 
  
    return B_Number; 
} 
int bd(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N]; for(ll i=0;i<N;++i)cin>>B[i];
    vector<ll> V;
    for(ll i=0;i<N;++i)
    {
        if(A[i]==B[i])V.push_back(3*A[i]);
        else if(A[i]<B[i])V.push_back(0);
	    else if((A[i]-B[i]&1))V.push_back(0);
	    else if(((A[i]-B[i])>>1)&B[i])V.push_back(0);
        else
        {
            ll a = db(A[i]);
            ll b = db(B[i]);
            string sa = to_string(a);
            string sb = to_string(b);
            string x ="",y="";
            ll la = sa.size();
            ll lb = sb.size();
            ll c = 0;
            ll s=0;
            ll i=0,j=0;
            if(la>lb)
            {
                s=la-lb;
                i=s;
            }
            else if(la<lb)
            {
                s = lb - la;
                j=s;
            }
            // for(;i<la and j<lb;)
            // {
            //     if(sa[i]=='1' and sb[j]=='1' and c==0)x+="0",y+="1";
            //     else if(sa[i]=='1' and sb[j]=='1' and c>0)x+="1",y+="1",--c;
            //     else if(sa[i]=='0' and sb[j]=='0' and c==0)x+="0",y+="0";
            //     else if(sa[i]=='0' and sb[j]=='0' and c>0)x+="1",y+="1",--c;
            //     else if(sa[i]=='1' and sb[j]=='0')x+="1",y+="1";
            //     else if(sa[i]=='0' and sb[j]=='1')x+="0",y+="1",++c;
            //     else x+="0",y+="0";
            //     ++i,++j;
            // }
            a = stoi(x);
            b = stoi(y);
            cout<<a<<' '<<b<<'\n';
            V.push_back( bd(a)*2 + bd(b)*3);

        }
	}
    for(ll i=0;i<V.size();++i)cout<<V[i]<<' ';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/