#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin >> t;
    while (t--){
        int n, m,value = 0;;
        cin >> n >> m;
        if( (n*m)%2 == 0 ){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
	return 0;
}