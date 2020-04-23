#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,m,x;
    cin>>T;
    while(T--)
    {
        cin>>n>>m>>x;
        if(n+m>x)
        {
            cout<<"OK"<<endl;
        }
        else
            cout<<"Wrong!!"<<endl;
    }
}
