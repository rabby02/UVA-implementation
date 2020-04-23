
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tes;
    cin >> tes;

    while(tes--)
    {
        int n, k;

        long long sum = 0;

        cin >> n >> k;

        for(int i = 1; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                if(i % k != 0)
                {
                    sum += i;
                }

                if (i == (n / i))
                {
                    continue;
                }

                int p = n / i;

                if (p % k != 0)
                {
                    sum += p;
                }
            }
        }

        cout<< sum << endl;
    }
}
