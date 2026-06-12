#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1);
        int count=0;
        for(int i=1;i<=n;++i){
            int temp;
            cin>>temp;
            if(temp==2) count++;
            v[i]=temp;
        }
        if(count%2==1){
            cout<<-1<<'\n';
            continue;
        }
        if(count==0){
            cout<<1<<'\n';
            continue;
        }
        count/=2;
         int temp=0;
        for(int i=1;i<n;i++){
           
            if(v[i]==2) temp++;
            if(temp==count){
                cout<<i<<'\n';
                break;
            }
        }
    }
}
//accepted
