#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long int t,a,b,sum=0,i,j,k,flag;
    cin>>t;

    for(i=1;i<=t;i++){
        cin>>a>>b;
        sum=pow(a,b);
        flag=0;
        for(j=1;j<=sum;j++){
            if(sum%j==0 && j!=a){
                k=sum/j;
                if(k%j==0 && b!=(k/j)){
                    flag++;
                }
                if(sum==j && b==k){
                    flag--;
                }

            }
        }

        cout<<"Case "<<i<<": "<<flag<<endl;
    }
    return 0;
}

