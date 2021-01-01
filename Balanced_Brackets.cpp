#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    stack<char> st;
    for(ll i=0;s[i];++i)
    {
        if(st.empty() or s[i]=='(' or s[i]=='{' or s[i]=='[')st.push(s[i]);
        else 
        {
            char ch = s[i];
            char tp = st.top();
            if(ch==')' and tp=='(')st.pop();
            else if(ch=='}' and tp=='{')st.pop();
            else if(ch==']' and tp=='[')st.pop();
            else 
            {
                cout<<"NO\n";return;
            }
        }
        
    }
    if(st.empty())cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/