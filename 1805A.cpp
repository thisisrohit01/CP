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
        if(n&1){
            cout<<a<<'\n';
        }
        else{
            if(a==0) cout<<a<<'\n';
            else cout<<-1<<'\n';
        }
    }
}
//accepted