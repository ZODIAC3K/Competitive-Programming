#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if ((a == a1 || a == b1) && !(b == a2 || b == b2)) {
            cout << "1" << endl;
        } else if ((b == a2 || b == b2) && !(a == a1 || a == b1)) {
            cout << "2" << endl;
        }else{
            cout << "0" << endl;
        }
    }
    return 0;
}