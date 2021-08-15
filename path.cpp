#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool check(string s,int x,int y)
{
    int st=x;
    for(auto i:s)
    {
        if(i=='r')++st;
        else --st;
    }
    //if(y==st)cout<<s<<' ';
    return (y==st);
}
unordered_set<string> st;
void subsequence(string str)
{
    for (int i = 0; i < str.length(); i++) {
        for (int j = str.length(); j > i; j--) {
            string sub_str = str.substr(i, j);
            st.insert(sub_str);
            for (int k = 1; k < sub_str.length(); k++) {
                string sb = sub_str;
                sb.erase(sb.begin() + k);
                subsequence(sb);
            }
        }
    }
}
void solve()
{
    string s;cin>>s;
    int n;cin>>n;
    int x,y;cin>>x>>y;
    int ans=0;
    subsequence(s);
    for (auto i : st)
    {
        if(check(i,x,y))++ans;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/