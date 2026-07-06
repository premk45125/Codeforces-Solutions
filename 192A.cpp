#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int>v(k);
        int cnt2 = 0;
        bool cnt3 = false;

        for (int i = 0; i < k; i++) {
            cin >> v[i];
            if (v[i]>= 3)
                cnt3 = true;
            if (v[i] >= 2)
                cnt2++;
        }
        if (cnt3 || cnt2 >= 2)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
    return 0;
}