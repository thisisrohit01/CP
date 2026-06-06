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
        int sum=accumulate(v.begin(),v.end(),0);
        if(sum%2==1) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}