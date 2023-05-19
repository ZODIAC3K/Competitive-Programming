#include <iostream>
#include <string>
using namespace std;

int main() {
        string s = "XXVII";
        int sum = 0;
        int len = s.length();
        char rs[] = {'I','V','X','L','C','D','M'};
        int rv[] = {1,5,10,50,100,500,1000};
        int v[len+1];
        for (int i = 0; i < len; i++){
            for(int j  = 0; j < sizeof(rs)/sizeof(rs[0]); j++){
                if(s[i] == rs[j]){
                    v[i] = rv[j];
                }
            }
        }
        for(int i = 0; i < len; i++){
            if(v[i] < v[i+1] && i+1 < len){
                sum = sum - v[i];
            }else{
                sum = sum + v[i];
            }
        }
        cout << sum << endl;
        // return sum;
        return 0;
}
