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
        int maxT, maxN, sumN, maxvalue = 0;;
        cin >> maxT >> maxN >> sumN;
        while(maxT && sumN){
            int N = min(maxN, sumN);
            maxvalue = maxvalue + N * N;
            sumN = sumN - N;
            maxT--;
        }
        cout << maxvalue << "\n";
    }
	return 0;
}
