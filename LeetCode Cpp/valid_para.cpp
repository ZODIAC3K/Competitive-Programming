#include <bits/stdc++.h>
using namespace std;

// we are compairing ascii as if x has this ascii value and x+1 has this ascii value then only it will return so basically opening(x) and closing(x+1) bracket ascii value
// Better way use map(STL)

string isValid(string s)
{
    string status = "";
        for (int i = 0; i < 1; i++ )
        {
            cout << s[s.size()-2] << " - " << s[s.size()-1] <<endl;
            if(s[s.size()-2]  == s[s.size()-1] - 1)
            {
                status = "true";
                
            }else
            {
                status = "false";
            }
        }
        return status;
}

int main()
{
    string x = "(){}[]";
    cout << isValid(x) << endl;
    return 0;
}