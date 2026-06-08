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
        sort(v.begin(),v.end());
        vector<int>b,c;
        int min=v[0];
        for(int i=0;i<n;++i){
            if(v[i]==min) b.push_back(v[i]);
            else c.push_back(v[i]);
        }
        if(c.size()==0) {
            cout<<-1<<'\n';
            continue;
        }
        cout<<b.size()<<' '<<c.size()<<'\n';
        for(int i=0;i<b.size();++i) cout<<b[i]<<' ';
        cout<<'\n';
        for(int i=0;i<c.size();++i) cout<<c[i]<<' ';
        cout<<'\n';
    }
}
//accepted