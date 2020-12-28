#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll N= s.size();
    if(N&1)
    {
        cout<< "NO\n";return;
    }
    stack<char> st;
    ll a=0,c=0;
    bool f=true;
    for(ll i=0;s[i];++i)
    {
        if(st.empty())st.push(s[i]);
        else if(s[i]=='(' or s[i]=='?')st.push(s[i]);
        else st.pop();        
    }
    while(!st.empty())
    {
        if(st.top()=='?')
        {
            st.pop();
            if(st.top()==')')
            {
                cout<<"NO\n";return;
            }
            else st.pop();
        }
        else 
        {
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";
    //else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/