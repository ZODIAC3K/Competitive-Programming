#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            if(n % 2 == 0){
                if(i == 0 || i == n-1){
                cout << "1";
                }
                else{
                    cout << "0";
                }
            }else{
                if(i == 0 || i == n-1){
                cout << "0";
                }
                else{
                    cout << "1";
                }
            }
        }
        cout << endl;
    }
    return 0;
}