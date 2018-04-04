#include <bits/stdc++.h>
#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()
using namespace std;

typedef long long int lli;

int main()
{
    map<string,vector<lli> > m_d;

    m_d["January"];

    map<lli,string> months;
    months[1]="January";
    months[2]="February";

    map<string,lli> mo;

    string str = "January";

    mo["January"] = 1;


    cout<<mo[str]++<<endl;

    cout<<"Size "<<m_d[str].size()<<endl;

    cout<<months[mo[str]++]<<endl;

    return 0;
}
