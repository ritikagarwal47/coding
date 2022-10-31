#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;
    cin>>s;
    set<string> st;
    st.insert(s);
    sort(s.begin(),s.end());
    do
    {
        st.insert(s)
    } while (next_permutation(s.begin(),s.end()));
    cout<<st.size()<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
