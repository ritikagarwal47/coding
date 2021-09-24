#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll n, m, x, y;cin >> n >> m >> x >> y;
    if (n < m)swap(n, m);
    if (n == 1 or m == 1)cout << (n + m - 2) * x << endl;
    else if (y < x)
    {
        if (n % 2 == m % 2)cout << (n - 1) * y << endl;
        else cout << (n - 2) * y + x << endl;
    }
    else if (y < 2 * x)cout << (m - 1) * y + (n - m) * x << endl;
    else cout << (n + m - 2) * x << endl;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/