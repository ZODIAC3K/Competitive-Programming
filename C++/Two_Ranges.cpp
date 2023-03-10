#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    // code here
        int a,b,c,d,count = 0, ans;
        cin >> a >> b >> c >> d;
        for (int i = 0; i <= max({a,b,c,d}); i++){
            if( (i >= a && i <= b) || (i >= c && i <=d) ){
                count = count + 1;
            }
        }
        cout << count << "\n";
        
    }
    return 0;
}