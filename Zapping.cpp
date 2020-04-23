#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T,t,f,c;
    int a,b;

   // freopen("prob.txt", "w+", stdout);
    while(cin>>a>>b)
    {
        if(a==-1&&b==-1)
        {
            break;
        }
        t=abs(a-b);

        if(a < b){
        f=a+(100-b);
        }
        else{
            f=b+(100-a);
        }

        cout<<min(t,f)<<endl;
    }






}



