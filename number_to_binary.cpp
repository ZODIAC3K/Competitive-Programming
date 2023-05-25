#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int y = abs(n);
    int binaryNum[32];

    int i = 0;

    while (y > 0)
    {
        binaryNum[i] = y % 2;
        y = y / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if(n > 0)
        {
            cout << binaryNum[j];
        }else
        {
            cout << !binaryNum[j];
        }
        
    }

    return 0;
}