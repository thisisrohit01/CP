#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i)cin>>v[i];
    vector<int> temp=v;
    sort(v.begin(),v.end());
    //reverse(v.begin(),v.begin()+n-1);
    rotate(v.begin(),v.end()-1,v.end());
        //to check for prfix sum;
    int sum=0;
    bool ok=true;
    for(int i=0;i<n;++i){
        if(v[i]==sum){
            ok=false;
            break;
        }
        sum+=v[i];
    }
    if(!ok){
        cout<<"NO\n";
        continue;
    }
    cout<<"YES\n";
    for(int i=0;i<n;++i) cout<<v[i]<<' ';
    cout<<'\n';
    }    
}
//accepted;