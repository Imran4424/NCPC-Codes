#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    //freopen("in.txt","rt",stdin);

    lli a1,a2,d1,d2,n1,n2,sum;

    lli test;
    scanf("%lld",&test);

    for(lli t=1;t<=test;t++)
    {

        scanf("%lld %lld %lld %lld %lld %lld", &a1,&d1,&n1,&a2,&d2,&n2);

        sum = (n1*(2*a1+(n1-1)*d1))/2 + (n2*(2*a2+(n2-1)*d2))/2;

        printf("Case %lld: %lld\n",t,sum);
    }

    return 0;
}
