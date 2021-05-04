#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
const int  N = 26;
struct trie{
    trie* sons[N*N];
    ll data;
    trie():data(0)
    {
        for(auto& i:sons)i=0;
    }
};
trie* root;
void add(string s)
{
  trie* v=root;
  for(ll i=0;s[i];++i)
  {
    char x=s[i] ;
    char y=s[s.size() - i - 1] ;
    //cout<<x y<<'\n';
    ll ch = (x - 'a')*N + (y -'a');//cout<<ch<<'\n';
    if(!v->sons[ch])v->sons[ch] = new trie();//cout<<ch<<'\n';
    v= v->sons[ch];
    (v->data)++;
  }
}
ll fun(trie* v,ll h)
{
  if(!v)return 0;
  ll ans=((v->data)/2)*(h*h - (h-1)*(h-1));//cout<<ans<<'\n';
  for(auto i:v->sons)
  {
    ans+=fun(i,h+1);
    //cout<<ans<<'\n';
  }
  //cout<<ans<<'\n';
  return ans;
}

void solve()
{   
    root = new trie();
    ll N;cin>>N;
    for(ll i=0;i<N;++i)
    {
        string x;cin>>x;add(x);
    } 
    cout<<fun(root,0)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/