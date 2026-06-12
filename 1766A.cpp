#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()==1){
            cout<<s<<'\n';
            continue;
        }
        int ans=0;
        ans+=(s[0]-'0');
        for(int i=1;i<s.length();++i){
            ans+=9;
        }
        
        cout<<ans<<'\n';
    }
}
//accepted at one go 