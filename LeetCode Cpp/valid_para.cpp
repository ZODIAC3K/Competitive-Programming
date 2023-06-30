#include <bits/stdc++.h>
using namespace std;

// we are compairing ascii as if x has this ascii value and x+1 has this ascii value then only it will return so basically opening(x) and closing(x+1) bracket ascii value
// Better way use map(STL)

bool isValid(string s)
{
    unordered_map<char, char> u_brackets;
    u_brackets.insert({'(', ')'});
    u_brackets.insert({'{', '}'});
    u_brackets.insert({'[', ']'});
    bool status = false;
    for (char key : s)
    {
            if( s.size() % 2 == 0){
                if (u_brackets.find(s[s.size()-2])->second == s[s.size() - 1])
            {
                status = true;
            }
            else
            {
                status = false;
                break;
            }
            }else{
                status = false;
                break;
            }
            
    }
    return status;
}

    int main()
    {
        string x = "(){}[]";

        if (isValid(x))
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
        return 0;
    }