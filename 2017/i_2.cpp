#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    //freopen("in.txt","rt",stdin);

    lli test;
    scanf("%lld",&test);

    for(lli t=1;t<=test;t++)
    {
        lli n,m,first,pom = 0;
        scanf("%lld %lld",&n,&m);

        map<lli,vector<lli> > lists;
        map<lli,lli> sub;

        for(lli i=1;i<=m;i++)
        {
            lli a,b;

            if(i==1)
            {
                first = a;
            }

            scanf("%lld %lld",&a,&b);

            lists[a].push_back(b);

            sub[b];
        }

        for(lli i=1;i<=n;i++)
        {
            if(sub.count(lli(i)))
            {

                if((lists[i].size()) == 0)
                {
                    pom++;
                }
            }
            else
            {
                pom++;
            }
        }

        printf("Case %lld: %lld\n",t,pom);

    }


    return 0;
}
