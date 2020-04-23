#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[101];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int len=strlen(str);
        if(len>3)
        {
            cout<<"3"<<endl;
        }
        else
        {
            if(str[0]=='o'&&str[1]=='n')
            {
                cout<<"1"<<endl;
            }
            else if(str[1]=='n'&&str[2]=='e')
            {
                 cout<<"1"<<endl;
            }
            else if(str[0]=='o'&&str[2]=='e')
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
        }

    }
    return 0;
}
