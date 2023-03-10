#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    // code here
        int n,count_1 = 0, count_0 = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i<n ; i++){
            if(s[i] == '1'){
                count_1++;
            }else{
                count_0++;
            }
        }
        if(count_1 == count_0){
            cout << count_1 << endl;
        }else if (count_1 > count_0){
            cout << count_0 + 1 << endl;
        }else{
            cout << count_1 << endl;
        }
    }
    return 0;
}