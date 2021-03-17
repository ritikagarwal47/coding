#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll lps[10000+4];
void computeLPSArray(string pat, ll M) 
{ 
    ll len = 0; 
    lps[0] = 0; 
    int i = 1; 
    while (i < M) 
    { 
        if (pat[i] == pat[len]) 
        { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else 
        { 
            if (len != 0) 
            { 
                len = lps[len - 1]; 
  
            } 
            else
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 
ll KMPSearch(string pat, string txt) 
{ 
    ll M = pat.size(); 
    ll N = txt.size(); 
    ll lps[M]; 
    computeLPSArray(pat, M); 
  
    ll i = 0; 
    ll j = 0; 
    while (i < N) 
    { 
        if (pat[j] == txt[i]) 
        { 
            j++; 
            i++; 
        } 
  
        if (j == M) 
        { 
           // printf("Found pattern at index %d ", i - j); 
            j = lps[j - 1]; 
            return (i-j);
        } 
        else if (i < N && pat[j] != txt[i]) 
        { 
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
        } 
    } 
    return -1;
} 
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    string a,b;cin>>a;
    for(ll i=1;i<N;++i)
    {
        cin>>b;
        string pre;
        bool ok=true;
        ll p = KMPSearch(a,b);
        cout<<p<<' ';
        if(p==-1)
        {
            cout<<"-1\n";return;
        }
        ans+=p;
        pre = a.substr(p) + a.substr(0,p);
        cout<<pre<<'\n';
        a=pre;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/