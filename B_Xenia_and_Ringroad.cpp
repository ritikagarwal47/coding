    #include<iostream>
    #include<algorithm>
    using namespace std;
    int main()
    {
    	int n, m, q, a = 1;long long c = 0;
    	cin >> n >> m;
    	while (m--) { cin >> q; c += (q - a + n) % n; a = q; }cout << c;
     
    }