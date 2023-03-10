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
        int n,x,y;
        cin >> n >> x >> y;
        for(int i = 0; i < y; i++){
            n=n-x;
        }
        if(n <= 0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}