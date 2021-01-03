#include<bits/stdc++.h>
#include <iostream>
#define p long long int
using namespace std;

p fucking_boxes(p H[],p i,p x,p y,p k,p n){
    //cout<< x<<' '<<y<<' '<<i<<'\n';
    
    if(x>=k and y>=k){
        return i;
    }
    if(i==n){
        return LONG_MAX;
    }
    if(x>=k){
        return fucking_boxes(H,i+1,x,y+H[i],k,n);
    }
    if(y>=k){
        return fucking_boxes(H,i+1,x+H[i],y,k,n);
    }
    return min(fucking_boxes(H,i+1,x,y+H[i],k,n),fucking_boxes(H,i+1,x+H[i],y,k,n));
}
int main() 
{
	int T;cin>>T;
    while(T--)
    {
        p n,k,i;
        cin>>n>>k;
        p H[n];
        //p s=0;
        for(i=0;i<n;++i){
            cin>>H[i];//s+=H[i];
        }
        p x=0,y=0;
        sort(H,H+n,greater<p>());
        p s = fucking_boxes(H,0,x,y,k,n);
        if(s==LONG_MAX)cout<<-1<<endl;
        else cout<<s<<endl;
    }
	return 0;
}
