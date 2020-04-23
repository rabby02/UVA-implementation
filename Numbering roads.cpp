#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,t=0;
    while(scanf("%d %d",&n,&r))
    {
        if(n==0&&r==0)
        {
            break;
        }
        t++;
        int temp=n-r;
        if(temp>26*r)
        {
          printf("case %d: impossible",t);
        }
        else
        {
            int x=(temp/n)+1;
            printf("case %d: %d",t,x);
        }

    }
    return 0;
}
