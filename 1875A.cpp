#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<int>v(n);
        for(int i=0;i<n;++i) cin>>v[i];
        long long ans=b;
        for(int i=0;i<n;++i){
            if(v[i]>=a) ans+=(a-1);
            else ans+=v[i];
        }
        cout<<ans<<'\n';
    }
}
//accepted
