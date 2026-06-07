#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pos=0;
        int neg=0;
        for(int i=0;i<n;++i){
            int temp;
            cin>>temp;
            if(temp>0) pos++;
            else neg++;
        }
        int ans=0;
        while(neg>pos){
            ans++;
            neg--;
            pos++;
        }
        if(neg%2!=0) ans++;
        cout<<ans<<'\n';
    }
}
//accepted