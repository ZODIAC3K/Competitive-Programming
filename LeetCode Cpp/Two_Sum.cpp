#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    bool status = false;
    for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++)
    {
        for (int j = i + 1; j < sizeof(nums)/sizeof(nums[0]); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]" << endl;
                status = true;
            }
        }
    }
    if(status == false){
       cout << "[]" << endl; 
    }
    return 0;
}