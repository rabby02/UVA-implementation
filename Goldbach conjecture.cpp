#include<bits/stdc++.h>
#include<bits/algorithmfwd.h>
using namespace std;
typedef long long ll;
const int maxn = 106;
bool prime[maxn];
vector<int>primes;
bool sieVe()
{
    prime[0]=prime[1] = true;

    for(int i = 2; i*i <= maxn; i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<maxn; j+=i)
            {
               prime[j]= true;
            }
        }

    }
    for(int i=0; i<maxn; i++)
    {
        if(prime[i]==false)
        {
            primes.push_back(i);
        }
    }
}

void findDiff(int n)
{

    for(int i=0; primes[i]<=n/2; i++)
    {
        int x = n - primes[i];

        if(prime[x] == false)
        {
            printf("%d = %d + %d\n",n, primes[i],x);
            break;
        }
    }
}
int main()
{
    memset(prime, false, sizeof prime);
    sieVe();
    int n;
    while(scanf("%d",&n)!=0)
    {
        findDiff(n);

    }
    return 0;

}
