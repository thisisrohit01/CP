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
        v.push_back(1);
        int best=0;
        int count=0;
        for(int i=0;i<v.size();++i){
            if(v[i]==0) count++;
            else{
                best=max(best,count);
                count=0;
            }
        }
        cout<<best<<'\n';
    }
}
//accepted
