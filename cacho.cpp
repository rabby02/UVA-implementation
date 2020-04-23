#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,t;
    int arr[100];
    cin>>T;
    while(T--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(b==a+1&&c==b+1&&d==c+1&&e==d+1)
        {
            cout<<"Y"<<endl;
        }
        else
            cout<<"N"<<endl;



    }
    return 0;
}
