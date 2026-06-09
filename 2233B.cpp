#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         for(int i=1;i<=n;++i) cout<<i<<' ';
//         for(int i=n;i>=1;--i) cout<<i<<' ';
//         for(int i=1;i<=n;++i) cout<<i<<' ';
//         for(int i=1;i<=n;++i) cout<<i<<' ';
//         cout<<'\n';
//     }
// }
void solve() {
    int n;
    cin >> n;
    vector<int> b1(n), b2(n), b3(n), b4(n);
    
    for (int i = 0; i < n; i++) {
        b1[i] = i + 1;
        b2[i] = n - i;
        b3[i] = i + 1;
        b4[i] = i + 1;
    }
    if (n % 2 != 0) {
        int m = (n + 1) / 2;
        
        int idx_1 = -1, idx_m = -1;
        for (int i = 0; i < n; i++) {
            if (b2[i] == 1) idx_1 = i;
            if (b2[i] == m) idx_m = i;
        }
        swap(b2[idx_1], b2[idx_m]);
    }
    for (int x : b1) cout << x << " ";
    for (int x : b2) cout << x << " ";
    for (int x : b3) cout << x << " ";
    for (int x : b4) cout << x << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}