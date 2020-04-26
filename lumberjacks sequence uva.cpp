#include <bits/stdc++.h>
using namespace std;
int freq[123];
int main()
{
    int tes;
    cin >> tes;
    string temp = "";
    getchar();
    while(tes--)
    {
        memset(freq, 0, sizeof freq);
        string  str;
        getline(cin, str);

        /*
        for(int i = 0; i < str.size(); i++)
        {
            if(isalpha(str[i]))
            {
               // cout<< str[i]<<" ";
            }

            if(str[i] >= 48 && str[i] <= 57) // if (isdigit(str[i]));
            {
                temp += str[i];
            }
        }
        */


        for (int i = 0; i < str.size(); i++){

            if(isalpha(str[i]) || isdigit(str[i]))
            {
                freq[str[i]]++;
            }
        }


        for(int i = 48; i <= 122; i++)
        {
            if(freq[i] > 0)
            {
                printf("%c -> %d\n", i, freq[i]);
            }
        }
        str.clear();

    }
}
