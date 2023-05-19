#include <bits/stdc++.h>
using namespace std;


int hammingWeight(uint32_t n) 
        {
            int count = 0;
            while(n!=0)
            {
                if(n&1) // AND Bitwise Operator as 1 * 1 = 1 but for other 0*1,1*0,0*0 = 0 so we can check if last bit is 1 or not and if its one we can count that 1.
                {
                    count++;
                }
                n = n >> 1; // right shift operator ( divide by 2)
            }
            return count;
        }

int main()
{
    uint32_t n = 00000000000000000000000000001011;
    cout << hammingWeight(n) << endl; // ans 3
    return 0;
}