#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
        // code here
        int n,k;
        cin >> n >> k;
        int user[n]; // ignore it, because its windows g++ compiler issue.
        for(int i = 0; i < n; i++){
            cin >> user[i];
            if(user[i] <= k){
                k = k - user[i];
                cout << "1";
            }else{
                cout << "0";
            }
        }
        cout << endl;
    }

	return 0;
}