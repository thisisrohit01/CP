// #include<bits/stdc++.h>
// using namespace std;
// vector<int> sumArray;
// vector<int>v;
// bool isPossible(int target,int i,int sum){
//     if(sum==target){
//         return true;
//     }
//     if(v[i]<=target-sum){
//         sumArray.push_back(v[i]);
//         sum+=v[i];
//     }
//     isPossible(target,i,sum)
//     sumArray.pop_back()
//     isPossible(target,i-1))
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int x,k,n;
//         cin>>x,k,n;
        
//         for(int i=0;i<k;++i){
//             if(i==n) continue;
//             v.push_back(i);
//         }
//         if(isPossible(x,v.size(),0)){
//             cout<<"YES\n";
//             for(int i=0;i<sumArray.size();++i) cout<<sumArray[i]<<' ';
//             cout<<'\n';
//         }
//     }
// }
#include <iostream>
#include <vector>

using namespace std;

bool isPossible(int i, int target, vector<int>& v, vector<int>& sumArray) {
    // Base Case 1: Success!
    if (target == 0) {
        return true;
    }
    // Base Case 2: Out of bounds, or target went negative
    if (i < 0 || target < 0) {
        return false;
    }

    // Choice 1: Include v[i] (Only if it's greater than 0 to avoid infinite loops, and fits target)
    if (v[i] > 0 && v[i] <= target) {
        sumArray.push_back(v[i]);
        
        // CRUCIAL: Pass 'i' instead of 'i - 1' so we can reuse this element!
        if (isPossible(i, target - v[i], v, sumArray)) {
            return true;
        }
        
        // Backtrack
        sumArray.pop_back();
    }

    // Choice 2: Skip v[i] and move to the next element
    return isPossible(i - 1, target, v, sumArray);
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, k, n;
        cin >> x >> k >> n; 
        
        vector<int> v;
        vector<int> sumArray;

        // Populate pool of elements
        for (int i = 0; i < k; ++i) {
            if (i == n) continue;
            v.push_back(i);
        }

        // Start from the last element
        if (isPossible(v.size() - 1, x, v, sumArray)) {
            cout << "YES\n";
            for (int num : sumArray) {
                cout << num << ' ';
            }
            cout << '\n';
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}