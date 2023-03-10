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
        int n,x,ans;
        cin >> n >> x;
        long long int val[n];
        for(int i = 0; i < n; i++){
            cin >> val[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = n ; j > i; j--){
                if (val[i]%2 == 0){
                    if( j < i ){
                        j = j+1;
                    }
                    val[i] = val[i] ^ val[j];
                    val[i] = val[i] || x;
                    val[j] = val[i];
                    ans++;
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << val[i] << " ";
        }
        cout << endl;
        // cout << ans << endl;
    }
    return 0;
}