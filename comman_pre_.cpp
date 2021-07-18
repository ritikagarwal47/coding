#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int fun(string s,string st)
{
    int ans=0;
    int i=0,j=s.size();
    for(;i<s.size() and j<st.size();)
    {
        //cout<<s[i]<<' '<<st[j]<<'\n';
        if(s[i]==st[j])
        {
            ++ans;++i;++j;
        }
        else
        {
            i=0;
        }
    }
    return ans;
}
vector<int> commanPrefix(vector<string> inputs)
{
    vector<int> ans;
    for(auto s:inputs)
    {
        string cur="";
        int sum=0;
        for(int i=0;i<s.size();++i)
        {
            if(cur=="")sum+=s.size();
            else 
            {
                int res = 0;
                res = fun(cur,s);
                sum+=res;
            }
            cur+=s[i];
        }
        ans.push_back(sum);
    }
    return ans;
}
void solve()
{
    int n;cin>>n;
    vector<string> V;
    for(int i=0;i<n;++i)
    {
        string s;cin>>s;
        V.push_back(s);
    }  
    vector<int> v = commanPrefix(V);
    for(auto i:v)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/