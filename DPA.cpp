#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int T,n,i;
    int sum;
    cin>>T;
    while(T--)
    {
        cin>>n;
        sum=0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                   sum=sum+i;
            }
        }
        if(sum<n)
        {
            cout<<"deficient"<<endl;
        }
        if(sum==n)
        {
            cout<<"perfect"<<endl;
        }
        if(sum>n)
        {
            cout<<"abundant"<<endl;
        }




    }
    return 0;

}
