#include <bits/stdc++.h>
using namespace std;

#define SSTR( x ) static_cast< ostringstream & >( \
        ( ostringstream() << dec << x ) ).str()



/// int to string conversion

typedef long long int lli;

int main()
{
    freopen("input.txt","rt",stdin);

    map<lli,string> months;
    months[1]="January";
    months[2]="February";
    months[3]="March";
    months[4]="April";
    months[5]="May";
    months[6]="June";
    months[7]="July";
    months[8]="August";
    months[9]="September";
    months[10]="October";
    months[11]="November";
    months[12]="December";

    map<string,lli> mo;
    mo["January"] = 1;
    mo["February"]= 2;
    mo["March"] = 3;
    mo["April"] = 4;
    mo["May"] = 5;
    mo["June"] = 6;
    mo["July"] = 7;
    mo["August"] = 8;
    mo["September"] =9;
    mo["October"] = 10;
    mo["November"] = 11;
    mo["December"] = 12;

    map<string,vector<lli> > m_d;

    m_d["January"];

    m_d["October"];

    m_d["February"].push_back(13);
    m_d["February"].push_back(14);
    m_d["February"].push_back(21);


    m_d["March"].push_back(8);
    m_d["March"].push_back(21);
    m_d["March"].push_back(26);

    m_d["April"].push_back(1);
    m_d["April"].push_back(14);

    m_d["May"].push_back(1);
    m_d["June"].push_back(19);
    m_d["July"].push_back(18);
    m_d["August"].push_back(20);
    m_d["October"].push_back(31);
    m_d["November"].push_back(19);

    m_d["December"].push_back(10);
    m_d["December"].push_back(16);
    m_d["December"].push_back(25);


    map < string, string > special;
    special["February13"] = "Pohela Falgun";
    special["February14"] = "Valentine's Day";
    special["February21"] = "International Mother Language Day";
    special["Marc8"] = "International Women's Day";
    special["Marc21"] = "International Color Day";
    special["March26"] = "Bangladesh Independence Day";
    special["April1"] = "April Fools Day";
    special["April14"] = "Pohela Boishakh";
    special["May1"] = "May Day";
    special["June19"] = "Father's Day";
    special["July18"] = "Mandela Day";
    special["August20"] = "World Mosquito Day";
    special["October31"] = "Halloween";
    special["November19"] = "World Toilet Day";
    special["December10"] = "Human Rights Day";
    special["December16"] = "Victory Day of Bangladesh";
    special["December25"] = "Christmas Day";

    lli test;
    cin >> test;
    for(lli t=1; t<=test; t++)
    {
        string mon,dd;
        lli date,flag = 0;
        cin>>mon>>date;



        while(!flag)
        {


            if(m_d[mon].size()==0)
            {

                lli temp = mo[mon];



                if(temp==12)
                {
                    temp = 1;
                }
                else
                {
                    temp++;
                }

                date = 0;
                mon = months[temp];
            }

            for(lli i=0; i<m_d[mon].size(); i++)
            {
                if(date<=m_d[mon][i])
                {
                    dd = SSTR(m_d[mon][i]);
                    flag = 1;
                    goto label;
                }
            }


            if(flag==0)
            {


                lli temp = mo[mon];



                if(temp==12)
                {
                    temp = 1;
                }
                else
                {
                    temp++;
                }

                mon = months[temp];

                date = 0;


            }
        }


label:
        string spday =  mon  + dd ;

        cout<<"Case "<<t<<": "<<special[spday]<<endl;

    }


    return 0;
}
