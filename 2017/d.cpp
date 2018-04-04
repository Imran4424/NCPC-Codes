#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
    //freopen("in.txt","rt",stdin);

    lli a1,a2,d1,d2,n1,n2,sum1,sum2;

    lli test;
    cin>>test;

    for(lli t=1;t<=test;t++)
    {
        cin>>a1>>d1>>n1;
        cin>>a2>>d2>>n2;

        sum1 = (n1*(2*a1+(n1-1)*d1))/2;
        sum2 = (n2*(2*a2+(n2-1)*d2))/2;

        //cout<<sum1<<" "<<sum2<<endl;

        cout<<"Case "<<t<<": "<<sum1+sum2<<endl;
    }

    return 0;
}
