#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> p1(n, 0);
        vector<int> p2(n, 0);
        vector<int> p3(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) p1[i]++;
            else if (a[i] == 2) p2[i]++;
            else p3[i]++;

            if (i!=0) {
                p1[i] += p1[i - 1];
                p2[i] += p2[i - 1];
                p3[i] += p3[i - 1];
            }
        }

        vector<int> val(n);
        for (int i = 0; i < n; i++)
            val[i] = p1[i] + p2[i] - p3[i];


        vector<int> v1;
        for (int i = 0; i < n - 2; i++) {
            if (p1[i] >= p2[i] + p3[i])
                v1.push_back(i);
        }

        bool ok = false;
        for (int x = 0; x < v1.size(); x++) {
            int i = v1[x];
            for (int j = i + 1; j < n - 1; j++) {
                if (val[j] >= val[i]) {
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }
        if(ok)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}