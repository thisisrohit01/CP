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
    vector<int> v1;
    for(int i=0;i<n;++i){
        v1.push_back(n+1-v[i]);
    }
    for(int i=0;i<n;++i) cout<<v1[i]<<' ';
    cout<<'\n';
    }
}
//accepted

