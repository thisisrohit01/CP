#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool ok = false;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], a[j]) <= 2) {
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }

        cout << (ok ? "Yes" : "No") << '\n';
    }
}
//accepted
//gcd of any two element should be less then or equal to 2 then only it can be true