#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int r;
        cin>>r;
        cin>>s;
        int l=0 ;
        r--;
        while(l<r && s[l] != s[r]){
            l++;
            r--;
        }
        cout<<r-l+1<<'\n';
    }
}
//accepted