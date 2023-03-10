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
        int x,y,z,total;
        cin >> x >> y >> z;
        total = x+y+z;
        if(total >= 6 ){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}