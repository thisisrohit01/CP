#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n==1 && k!=1) {
            cout<<"NO"<<'\n';
            continue;
        }
        else if(n==1 && k==1){
            cout<<"YES"<<'\n';
        }
        if(n>=2){
            if(n==3){
                if(k==1 || k==3) {
                    cout<<"YES"<<'\n';
                    continue;
                }
                else {
                    cout<<"NO"<<'\n';
                    continue;
                }
            }
            if(n%2==1){
                if(k==n){
                    cout<<"YES"<<'\n';
                    continue;
                }
                if(k<n && k%2==1){
                cout<<"YES"<<'\n';
                continue;
                }
                else {
                    cout<<"NO"<<'\n';
                    continue;
                }
            }
            if(n%2==0){
                cout<<"YES"<<'\n';
            }
        }
    }
}
