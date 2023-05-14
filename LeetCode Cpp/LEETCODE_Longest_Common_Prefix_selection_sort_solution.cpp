#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string strs[] = {"flower","flow","flight"};
    string r = "";
    for (int i = 0; i < sizeof(strs) / sizeof(strs[0]) - 1; i++) {
        for(int j = i+1; j<sizeof(strs) / sizeof(strs[0]); j++){
            if(strs[j] < strs[i]){
                string s = strs[j];
                strs[j] = strs[i];
                strs[i] = s;
            }
        }
    }

    for (int i = 0; i < strs[0].size(); i++)
    {
        if(strs[0][i] == strs[sizeof(strs)/sizeof(strs[0]) - 1 ][i]){
            r = r + strs[0][i];
        }else{
            break;
        }
    }
    cout << r << endl;
    return 0;
}