#include <bits/stdc++.h>
using namespace std;
int subtractProductAndSum(int n) {

        int sum = 0, product = 1, result = 0;
        while( n!= 0 ){
            int r = n%10;
            product = product * r;
            sum = sum + r;
            n = n/10;
        }
        result = product - sum;
        return result;
    }

int main()
{
    int x = 234;
    cout << subtractProductAndSum(x) << endl; // showing output of function in console.
}