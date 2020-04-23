#include<bits/stdc++.h>
using namespace std;
int freqarr[10001];
bool isprime(int n)
{
    int i;
    if(n==1)
    {
        return false;
    }
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }

    }
    return true;
}
int main()
{
    int T,i;
    cin>>T;
    getchar();
    int x = 0;
    while(T--)
    {
        x++;
        memset(freqarr,0,sizeof(freqarr));
        string str;
        cin>>str;
        for(i=0; i<str.size(); i++)
        {
            freqarr[str[i]]++;
        }
        bool flag = false;

        printf("Case %d: ",x);
        for(i=48; i<=122; i++)
        {
            if(freqarr[i]>0)
            {
                if(isprime(freqarr[i])==true)
                {
                    printf("%c",i);
                    flag = true;

                }

            }

        }

        if(flag == false)
        {
            printf("empty");
        }
        cout<<endl;
    }

}
