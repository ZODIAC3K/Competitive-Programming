#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; // test case
    while (t--)
    {
        // code here
        for (int i = 0; i < 15; i = i+2) 
        {
            cout << i << endl;
            if(i&1)
            {
                continue;
            }
            i++;
        } 
    }

    return 0;
}