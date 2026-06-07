#include<bits/stdc++.h>
using namespace std;

bool checkPal(long long num){
    long long rev=0;
    long long og=num;
    while(num>0){
        int temp=num%10;
        rev= rev*10+temp;
        num/=10;
    }
    if(og==rev) return true;
    else return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long i=0;
        bool solvable=false;
        while((n-(12*i))>0){
            if(checkPal(n-(12*i))){
                solvable=true;
                break;
            }
            i++;
        }
        if(solvable) cout<<n-12*i<<' '<<12*i<<'\n';
        else cout<<-1<<'\n';
    }    
}

//Time limit exeeded
//do it again


