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
        int dragon_total = 0 , sloth_total = 0;
        int dragon_marks[3];
        int sloth_marks[3];
        for(int i = 0; i < 3; i++){
            cin >> dragon_marks[i];
            dragon_total = dragon_total + dragon_marks[i];
        }
        for(int i = 0; i < 3; i++){
            cin >> sloth_marks[i];
            sloth_total = sloth_total + sloth_marks[i];
        }

        if( dragon_total > sloth_total){
            cout << "DRAGON\n";
        }
        else if (dragon_total < sloth_total) {
            cout << "SLOTH\n";
        }
        else if(dragon_total == sloth_total)
        {
            if(dragon_marks[0] > sloth_marks[0])
            {
                cout << "DRAGON\n";
            }
            else if(dragon_marks[0] < sloth_marks[0])
            {
                cout << "SLOTH\n";
            }
            else if(dragon_marks[0] == sloth_marks[0])
            {
                if(dragon_marks[1] > sloth_marks[1])
                {
                cout << "DRAGON\n";
                }
                else if(dragon_marks[1] < sloth_marks[1])
                {
                    cout << "SLOTH\n";
                }
                else
                {
                    cout << "TIE\n";
                }
            }
        }
    }
	return 0;
}