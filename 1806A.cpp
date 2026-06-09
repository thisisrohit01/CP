#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b || c-a>d-b) cout<<-1<<'\n';
        else{
            int x=abs(a-c);
            int y=abs(b-d);
            int ans;
            if(c-a>0) ans=y+(y-x);
            else ans=2*y+x;
            cout<<ans<<'\n';
        }
    }
}
//accepted
