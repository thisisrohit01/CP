#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<char> v(n);
        for(int i=0;i<n;++i) cin>>v[i];
        int openCount=0;
        int closeCount=0;
        int count=1;
        for(int i=0;i<n-1;++i){
            if(v[i]==v[i+1] && v[i]=='(') count ++;
            else{
                openCount=max(openCount,count);
                count=1;
            }
        }
        for(int i=0;i<n-1;++i){
            if(v[i]==v[i+1] && v[i]==')') count ++;
            else{
                closeCount=max(closeCount,count);
                count=1;
            }
        }
        //cout<<openCount<<' '<<closeCount;
        int diff=abs(openCount-closeCount);
        
        

    }
}