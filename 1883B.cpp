#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v(26,0);
        for(int i=0;i<s.length();++i) v[s[i]-'a']++;
        int oddCount=0;
        for(int i=0;i<v.size();++i) if(v[i]%2!=0) oddCount++;
        if (k >= oddCount - 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}