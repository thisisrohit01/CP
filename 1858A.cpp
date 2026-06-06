#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        double c;
        cin>>a>>b>>c;
        if((a+ceil(c/2)>b+(c/2))) cout<<"First\n";
        else cout<<"Second\n";
    }
}