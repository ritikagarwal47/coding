#include<bits/stdc++.h>
using namespace std;
struct pr {
    int max;
    int min;
};
pr mn_mx(int a[], int n)
{
    pr minmax;
    if(n==1){
        minmax.max = a[0];
        minmax.min = a[0];
        return minmax;
    }
    if(a[0]>a[1]){
        minmax.max = a[0];
        minmax.min = a[1];
    }
    else{
        minmax.max = a[1];
        minmax.min = a[0];
    }
    for ( int j=2; j < n ; j++){
        if (a[j] > minmax.max)
            minmax.max = a[j];
        if (a[j] < minmax.min)
            minmax.min = a[j];
    }
    return minmax;
}
int main() {
	//code
	int t,n,a[100];
	cin >> t;
	while (t--){
	    cin >> n;
	    for ( int i =0; i < n; i++){
	        cin >> a[i];
	    }
	    pr minmax = mn_mx(a,n);
	    cout << minmax.max << " " << minmax.min << endl;
	    //cout << minmax.min << " " << minmax.max << endl;
	    
	}
	return 0;
}