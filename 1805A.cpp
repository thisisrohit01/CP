#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;++i) cin>>v[i];
        int a=0;
        for(int i=0;i<n;++i){
            a=a^v[i];
        }
        cout<<a<<'\n';
    }
}