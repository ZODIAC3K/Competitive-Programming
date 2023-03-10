#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,i = 0,value = 0;
        string s;
        cin >> n;
        cin >> s;
        for( i ; i < n; i++){
            if(s[i] == '1'){
                value++;
            }else{
                break;
            }
        }
        int ans = 0 , j = i;
        for(j; j < n; j++){
            int other = 0;
            while(s[j++] == '1'){
                other++;
            }
            j--;
            ans = max(ans,other);
        }
        value = value + ans;
        cout << value << "\n";
    }
    return 0;
}