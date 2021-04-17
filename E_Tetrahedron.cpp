
#include <bits/stdc++.h>

using namespace std;

// #pragma GCC optimize("O3")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define unm unordered_map<int,int>
#define pb emplace_back
#define nt _int128
#define PI 3.1415926535897932384626433
#define inf 1e18

const int N = 100005, mod = 1e9 + 7;

int power(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;cin>>t;while(t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        ans = power(3, n);
        if (n & 1)
            ans -= 3;
        else
            ans += 3;
        ans %= mod;
        sum = power(4, mod - 2);
        cout << (ans * sum) % mod;
    }
    return 0;
}