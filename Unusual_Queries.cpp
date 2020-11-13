#include <iostream>
#include<vector>
using namespace std;
//answer modulo
const int md = 1000000007;//(10^9+7)
const int MAX = 10010;
const int SOM = 100010;
const int N = 500010;//(5x10^5)
//1 ≤ Ai ≤ 10^5
int a[N];
int *p = &a[N];
//M array
vector<int> occ[N];
int PREC[MAX][MAX / 2];
int fact[SOM], invfact[SOM];
/*findings
occ, diff -vector array    
Constraints
1 ≤ M ≤ 5 × 10^5
1 ≤ Q ≤ 3 × 10^5
1 ≤ Ai ≤ 10^5
∑ 0 ≤ i < M Ai ≤ 3 × 10^6
For each query, 0 ≤ l ≤ r < M
1 ≤ k ≤ 10^5
0 ≤ n ≤ 10^5
*/
inline int add(int &a, int b)
{
    a += b;
    if (a >= md)
    {
        a -= md;
    }
    return a;
}

inline int mul(int a, int b)
{   
    // prevetning overflow condition
    return (long long)a * b % md;
}

inline int pw(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    if (b == 2)
    {
        return (long long)a * a % md;
    }
    int res = 1;
    while (b > 0)
    {   //bitwise And
        if (b & 1)
        {
            res = mul(res, a);
            if (b == 1)
            {
                break;
            }
        }
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}

inline int inv(int x)
{
    return pw(x, md - 2);
}

inline int C(int n, int k)
{
    k = min(k, n - k);
    if (n <= 10000)
    {
        return PREC[n][k];
    }
    return mul(fact[n], mul(invfact[k], invfact[n - k]));
}


int main()
{
    printf("program started to function \n");
    //initializing first elt to be 1
    fact[0] = 1;    
    invfact[0] = 1;
 
    for (int i = 1; i < SOM; i++)
    {
        //mulitply two numbers
        fact[i] = mul(fact[i - 1], i);
        
        invfact[i] = inv(fact[i]);
    }
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX / 2; j++)
        {
            if (j == 0)
                PREC[i][j] = 1;
            else if (i == 0)
                PREC[i][j] = 0;
            else
            {
                PREC[i][j] = PREC[i - 1][j] + PREC[i - 1][j - 1];
                if (PREC[i][j] >= md)
                    PREC[i][j] -= md;
            }
        }
    }
    int m, tt;
    printf("\n Enter the array size and no of queries:");
    scanf("%d %d", &m, &tt);
    /*
    printf(" \n printing m and tt :%d %d", m , tt);
    */
    for (int i = 0; i < N; i++)
    {   
        
        occ[i].clear();
    }
    printf("\n Enter the array elements");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", a + i);
       

        occ[a[i]].push_back(i);
        /*
        printf("\n value of a [i] is : %d", a[i]);
        printf(" The Element %d is stored at %u\n", a[i], (p + i));
        printf("\n");

        printf("\n value of occ [a[i]] is : %d",occ[a[i]]  );
        printf("\n value of occ[i] is : %d", occ[i]);
        printf("\n");
        */
       
    }
    vector<int> diff;
    for (int i = 0; i < N; i++)
    {
        if (!occ[i].empty())
        {
            //entering the i values into difference arrray
            diff.push_back(i);
            //printf("\n Diff array values diff[i] is :%d", diff[i]);
        }
    }
    // This loop executes till the tt variable is 0
    while (tt--)
    {
        //printf("\n while loop is executed");
        int l,r, n, k;
        printf("\n Enter query params");
        scanf("%d %d %d %d",&l,&r, &n, &k);
        printf("\n Printing query params:");
        printf("\n values of l r n k is: \t %d %d %d %d",l,r,n,k);
        
        if (n == 0)
        {   printf("\n n value is 0");
            printf(" \n %d", 1);
            continue;
        }
        //checking if input is greater than 10^9
        // reducing overflow
        /*
        double multiply = (n - 1) * 1LL * (k - 1);
        printf("\n printing multiplication result : %d", multiply);         
        */
        if ((n - 1) * 1LL * (k - 1) > 1e9)
        {
            // executes upon overflow condition
            printf("%d\n", 0);
            continue;
        }
        int sub = (n - 1) * (k - 1);
        printf("\n Sub value : %d", sub);
        int ans = pw(fact[n], r - l);
        printf("\n Ans value after pw function:%d",ans);
        for (int i = 0; i < (int)diff.size(); i++)
        {
            int num = diff[i];
            int cnt = lower_bound(occ[num].begin(), occ[num].end(), r + 1) -
                      lower_bound(occ[num].begin(), occ[num].end(), l);
            if (cnt == 0)
            {
                continue;
            }
            int x = num - sub;
            int y = n;
            if (x < y)
            {
                ans = 0;
                break;
            }
            int z = C(x, y);
            ans = mul(ans, pw(z, cnt));
        }
        printf("\n Answer is : %d", ans);
    }
    return 0;
}