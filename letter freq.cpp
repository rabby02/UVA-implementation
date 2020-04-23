#include<bits/stdc++.h>
using namespace std;
int freqarr[10001];
int main()
{
    int T,i;

    cin>>T;
    getchar();
    while(T--)
    {
        string temp="";
        memset(freqarr,0,sizeof(freqarr));
        string str;
        getline(cin,str);
        for(i=0;i<str.length();i++)
        {
            if(isalpha(str[i]))
            {
                temp+=str[i];///copy///
            }
        }
         ///step 1: save alphabet in temp string///
         for(i=0;i<temp.size();i++)
         {
             if(temp[i]>=65&&temp[i]<=90)///if(isupper(temp[i]))
             {
                 temp[i]=temp[i]+32;///upper to lower///
             }
         }
        /// cout<<temp<<endl///
        for(i=0;i<temp.size();i++)
        {
            freqarr[temp[i]]++;
        }
        int mx=0;
        for(i=97;i<=122;i++)
        {
            if(freqarr[i]>0)
            {
                if(mx<freqarr[i])
                    mx=freqarr[i];
            }
        }
        for(i=97;i<=122;i++)
        {
            if(mx==freqarr[i])
            {
                printf("%c",i);

            }
        }
        cout<<endl;


    }

}
