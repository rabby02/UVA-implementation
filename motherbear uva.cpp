#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,flag,t;
    string temp="";
    while(getline(cin,str))
    {
        if(str=="DONE")
        {
            break;
        }

        for(i=0;i<str.size();i++)
        {
            if(isalpha(str[i]))
            {
                temp+=str[i];
            }
        }
       // cout<<temp<<endl;


        for(i=0;i<temp.size();i++)
        {
            if(temp[i]>=65&&temp[i]<=90)
            {
                temp[i]+=32;
            }
        }
       t=temp.size()-1;
       string temp1="";

        for(i=t;i>=0;i--)
        {
            temp1+=temp[i];

        }
        //cout<<temp1<<endl;

        if(temp1==temp)
        {
             cout<<"You won't be eaten!"<<endl;


        }
        else
        {
            cout<<"Uh oh.."<<endl;


        }

        temp.clear();
        temp1.clear();


    }
    return 0;
}
