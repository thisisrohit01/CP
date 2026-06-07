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
        sort(v.begin(),v.end(),[](int a,int b){
            return a>b;
        });
        bool check=true;
        for(int i=0;i<n-2;++i){
            if(v[i]%v[i+1]!=v[i+2]) check=false;
        }
        if(check) cout<<v[0]<<' '<<v[1]<<' '<<'\n';
        else cout<<-1<<'\n';
    }
}

//pretest passed