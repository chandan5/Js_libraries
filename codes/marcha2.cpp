.1) plaintext list. Status: AC, problem MARCHA2, contest . By chandan5 (chandan5), 2014-12-01 02:14:12.
#include<bits/stdc++.h>
 
#define SI(i) scanf("%lld",&i);
#define loop(i,n) for(i=0; i<n; i++)
#define ll long long int
#define NL printf("\n");
#define SP printf(" ");
#define PI(i) printf("%lld",i); 
 
using namespace std;
 
int main()
{
        ll it, tc, i, j, k, l;
        SI(tc);
        loop(it, tc)
        {
                SI(k);
                ll flag = 0;
                ll nodes = 1;
                SI(l);
                if(l == 0)
                {
                        loop(i, k-1)
                        {
                                SI(l);
                                if(flag == 0)
                                {
                                        if(l > 2*nodes)
                                                flag = 1;
                                        nodes = nodes*2 - l;
                                        if(nodes < 0)
                                                flag = 1;
                                }
                        }
                }
                else if(l == 1)
                {
                        nodes = 0;
                        loop(i, k-1)
                        {
                                SI(l);
                                if(l != 0)
                                        flag = 1;
                        }
                }
                else
                {
                        loop(i, k-1)
                                SI(l);
                        flag = 1;
                }
                if(flag == 0 && nodes == 0)
                        printf("Yes\n");
                else
                        printf("No\n");
        }
        return 0;
}


ubmission Info:


ββββββ―ββββββββββ―βββββββββββ
Test βMax(k)   βResult    β
     β         β(time)    β
 ββββββΌββββββββββΌβββββββββββ¨
1    β6        βaccepted  β
2s)   β
 ββββββΌββββββββββΌβββββββββββ¨
2    β1000000  βaccepted  β
6s)   β
 ββββββΌββββββββββΌβββββββββββ¨
3    β1000000  βaccepted  β
3s)   β
 ββββββΌββββββββββΌβββββββββββ¨
4    β1000000  βaccepted  β
5s)   β
 ββββββΌββββββββββΌβββββββββββ¨
5    β1000000  βaccepted  β
8s)   β
 ββββββΌββββββββββΌβββββββββββ¨
6    β1000000  βaccepted  β
0s)   β
ββββββ·ββββββββββ·βββββββββββ
