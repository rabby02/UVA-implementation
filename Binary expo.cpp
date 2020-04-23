#include<bits/stdc++.h>
using namespace std;
int binpOw(int a,int b)
{
    int res=1;
    while(b>0)
    {
        if(b%2)
        {
            res=res*a;
            b--;

        }
        else
            a=a*a;
            b=b/2;
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<binpOw(a,b)<<endl;
    return 0;
}
