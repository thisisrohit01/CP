#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        int ans=0;
        for(int i=0;i<10;++i){
            for(int j=0;j<10;j++){
                
                cin>>c;
                if(c=='X'){ 
                    int ring=min({i,j,9-i,9-j});
                    ans+=(ring+1);
                }  
            }
        }
        cout<<ans<<'\n';
    }
}