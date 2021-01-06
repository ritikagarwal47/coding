#include <bits/stdc++.h>
using namespace std;
typedef long long int p;
int main() {
	p T;cin>>T;
	p t;
	for(t=0;t<T;++t)
	{
	    p n,m,i,j;
	    scanf("%lld %lld",&n,&m);
        p a[n];
        p b[m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(j=0;j<m;j++)
        {
            cin>>b[j];
        }
	    set<p> s1;
        set<p> s2;
        s1.insert(0);
        s2.insert(0);
        while(s1.size())
        {
            p s = *s1.begin();
            s1.erase(s);
            //cout<<a<<'\n';
            for(i=0;i<n;++i)
            {
                p t = a[i]|s;
                if(!(s2.find(t)!=s2.end()))
                {
                    //cout<<t<<' '<<a[i]<<' '<<s<<'\n';;
                    s2.insert(t);
                    s1.insert(t);
                }
            }
            for(i=0;i<m;++i)
            {
                p t = b[i]&s;
                if(!(s2.find(t)!=s2.end()))
                {
                    //cout<<t<<' '<<b[i]<<' '<<s<<'\n';
                    s2.insert(t);
                    s1.insert(t);
                }
            }
            //s1.erase(s);
            //s2.
        }
        //cout<<'\n';
        //for(auto i : s2)cout<<i<<' ';cout<<'\n';
        cout<< s2.size() <<'\n';
	}
	return 0;
}
