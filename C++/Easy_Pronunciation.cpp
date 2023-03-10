#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
        // code here
        int n;
        string s;
        cin >> n >> s;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;

                if(count >= 4){
                    cout << "NO\n";
                    break;
                }

            }
        }
        if(count < 4){
            cout << "YES\n";
        }

    }

	return 0;
}