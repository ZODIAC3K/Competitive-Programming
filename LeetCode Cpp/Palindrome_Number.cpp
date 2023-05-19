#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    int t = x; // doing this because below we are actually changing value of x it self to 0 when we are reversing it so to overcome it we are storing it in t so that we can compair value for palindrome.
    long long R = 0;
    if (x < 0)
        return false;
    while (x != 0)
    {
        R = R * 10 + x % 10; // "x % 10" gives last digit of number then its added to R * 10 to reverse it
        x = x / 10;          // It removes last digit of the number
    }
    if (t == R)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 121; // test case
    if (isPalindrome(x) == true)
    {
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    return 0;
}