#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> v(n);
            for(int i=0;i<n;i++) cin>>v[i];
            sort(v.begin(),v.end());
            int avg=accumulate(v.begin(),v.end(),0);
            if((avg/v.size())==v[1]){
                cout<<-1<<'\n';
            }
            else{
                vector<int> b,c;
                for(int i=0;i<n;i++){
                    if(i<=n/2) b.push_back(v[i]);
                    else c.push_back(v[i]);
                }
                cout<<b.size()<<' '<<c.size()<<'\n';
                for(int i=0;i<b.size();++i) cout<<b[i]<<' ';
                cout<<'\n';
                for(int i=0;i<c.size();++i) cout<<c[i]<<' ';
                cout<<'\n';
            }
        }	
}

//not yet complete 