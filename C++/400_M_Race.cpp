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
        int x,y,z,ans;
        cin >> x >> y >> z;
        ans = min({x,y,z});
        if(ans == x){
            cout << "ALICE\n";
        }else if(ans == y){
            cout << "BOB\n";
        }else{
            cout << "CHARLIE\n";
        }
    }
    return 0;
}