#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
string op = "abcdefghijklmnopqrstuvwxyz";
bool palin(string s)
{
    ll i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])return false;
        ++i;--j;
    }
    return true;
}
ll ans=0;
// void printAllKLengthRec(string s, string prefix, int n, int k, string s1)
// {

//     if (k == 0)
//     {
//         string s2 = prefix;
//         reverse(s2.begin(), s2.end());
//         if (s2 == prefix)
//             cnt = (cnt + 1) % mod;
//         return;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         string newPrefix;

//         newPrefix = prefix + s[i];
//         if (newPrefix >= s1)
//             return;
//         printAllKLengthRec(s, newPrefix, n, k - 1, s1);
//     }

// }
void fun(string s,ll N,ll K,string curr="")
{
    if(N==0)
    {
        if(palin(curr))++ans;
        ans%=mod;return;
    }
    for(ll i=0;i<K;++i)
    {
        string p = curr+op[i];
        if(p>=s)return;
        fun(s,N-1,K,p);
    }
}
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    ans=0;
    fun(s,N,K);
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/