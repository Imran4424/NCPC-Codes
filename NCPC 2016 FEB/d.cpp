#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int t,a,b,sum=0,i,j,k,flag;
    cin>>t;

    for(i=1;i<=t;i++){
        cin>>a>>b;
        sum=pow(a,b);
        flag=0;
        for(j=1;j<=sum;j++){
            for(k=1;k<=sum;k++){
                if(a!=j && b!=k && pow(a,b)==pow(j,k)){
                    flag++;
                }
            }
        }
        cout<<"Case "<<i<<": "<<flag<<endl;
    }
    return 0;
}
