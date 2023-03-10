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
        int n,count = 1;
        cin >> n;
        int doll_list[n];
        for(int i = 0; i < n; i++){
            cin >> doll_list[i];
        }
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if((doll_list[j] == doll_list[k])){
                    if(count == 2){
                        count = 1;
                    }
                    j = j + 1;
                    count = count + 1;
                }
            }
            if(count % 2 != 0){
                cout << doll_list[j] << "\n";
                count = 1;
            }

        }   
    }
    return 0;
}