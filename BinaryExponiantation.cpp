#include<bits/stdc++.h>
using namespace std;

//recurssive code
int BinaryExpRecc(int a,int b){
    if(b==0) return 1;
    int rep=BinaryExpRecc(a,b/2);
    if(b&1) return a*rep*rep;
    else return rep*rep;
}

//iterative code
int BinaryExpIter(int a,int b){
    int ans=1;
    while(b){
        if(b&1) ans=ans*a;
        a=a*a;
        b>>=1;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<BinaryExpRecc(a,b)<<'\n';
    cout<<BinaryExpIter(a,b)<<'\n';

}