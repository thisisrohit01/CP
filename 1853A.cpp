#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector< int> v(n);
        for(int i=0;i<n;++i) cin>>v[i];
        vector<int>v1=v;
        sort(v1.begin(),v1.end());
        if(v != v1){
            cout<<0<<'\n';
        }
        else{
        int minDiff=INT_MAX;
        for(int i=0;i<n-1;++i){
            minDiff=min(minDiff,v[i+1]-v[i]);
        }
        minDiff /= 2 ;
        cout<<minDiff+1<<'\n';
        }
    }
}