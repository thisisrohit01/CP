#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double n,x,y,z;
        cin>>n>>x>>y>>z;
        int normal=ceil(n/(x+y));
        int ai=ceil((n+10*y*z)/(x+10*y));
        if(ai>normal) cout<<normal<<'\n';
        else cout<<ai<<'\n';
    }
}